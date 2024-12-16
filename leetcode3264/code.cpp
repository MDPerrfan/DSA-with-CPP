vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
          for (int i = 0; i < k; i++) {
            int minValue = INT_MAX; // Initialize minimum value
            int minIndex = -1;      // Index of first occurrence of the minimum value
            
            // Find the minimum value and its first occurrence
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < minValue) {
                    minValue = nums[j];
                    minIndex = j;
                }
            }

            // Replace the minimum value with its multiplied result
            nums[minIndex] = nums[minIndex] * multiplier;
        }
        return nums;
    }