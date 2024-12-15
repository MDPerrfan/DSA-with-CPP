// Maximum Average Pass Ratio
double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
               // Priority queue to store classes by maximum gain in pass ratio
        std::priority_queue<std::pair<double, std::pair<int, int>>> pq;
        
        // Initialize the priority queue with the initial gain of each class
        for (const auto& cls : classes) {
            int pass = cls[0], total = cls[1];
            double initialGain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({initialGain, {pass, total}});
        }
        
        // Distribute the extra students
        while (extraStudents-- > 0) {
            auto [gain, cls] = pq.top();
            pq.pop();
            int pass = cls.first;
            int total = cls.second;
            pass++;
            total++;
            double newGain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({newGain, {pass, total}});
        }
        
        // Calculate the final average pass ratio
        double totalRatio = 0.0;
        while (!pq.empty()) {
            auto [gain, cls] = pq.top();
            pq.pop();
            int pass = cls.first;
            int total = cls.second;
            totalRatio += (double)pass / total;
        }
        
        return totalRatio / classes.size();
    }