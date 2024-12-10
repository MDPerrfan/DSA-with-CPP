int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    int count = 0;
    int prefixSum = 0;

    // Initialize the map with a prefix sum of 0
    prefixSumCount[0] = 1;

    for (int num : nums) {
        // Update the prefix sum
        prefixSum += num;

        // Check if there exists a prefix sum such that (prefixSum - k) exists
        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum - k];
        }

        // Update the map with the current prefix sum
        prefixSumCount[prefixSum]++;
    }

    return count;
    }