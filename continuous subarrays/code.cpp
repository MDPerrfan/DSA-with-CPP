   long long continuousSubarrays(vector<int>& nums) {
    int l = 0;
    long long count = 0;
    deque<int> minDeque, maxDeque;

    for (int r = 0; r < nums.size(); r++) {
        // Maintain maxDeque
        while (!maxDeque.empty() && nums[r] > maxDeque.back()) {
            maxDeque.pop_back();
        }
        maxDeque.push_back(nums[r]);

        // Maintain minDeque
        while (!minDeque.empty() && nums[r] < minDeque.back()) {
            minDeque.pop_back();
        }
        minDeque.push_back(nums[r]);

        // Shrink the window if the condition is violated
        while (maxDeque.front() - minDeque.front() > 2) {
            if (maxDeque.front() == nums[l]) maxDeque.pop_front();
            if (minDeque.front() == nums[l]) minDeque.pop_front();
            l++;
        }

        // Count valid subarrays ending at r
        count += (r - l + 1);
    }

    return count;
   }