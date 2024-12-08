   vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // Sort the array
        int n = nums.size();

        // Iterate through the first two numbers
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for `i`

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for `j`

                int p = j + 1, q = n - 1;

                while (p < q) {
                    long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];
                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        q--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});

                        // Skip duplicates for `p`
                        while (p < q && nums[p] == nums[p + 1]) p++;
                        // Skip duplicates for `q`
                        //while (p < q && nums[q] == nums[q - 1]) q--;

                        // Move both pointers
                        p++;
                        q--;
                    }
                }
            }
        }

        return ans;
    }