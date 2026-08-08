class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // -4 -1 -1 0 1 2
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i=0;i<nums.size()-2;i++) {
            int lo = i+1, hi = nums.size()-1;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            while (lo < hi) {
                int sum = nums[i] + nums[lo] + nums[hi];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    lo++;
                    hi--;
                    // Skip duplicate values for 'lo'
                    while (lo < hi && nums[lo] == nums[lo - 1]) {
                        lo++;
                    }
                    // Skip duplicate values for 'hi'
                    while (lo < hi && nums[hi] == nums[hi + 1]) {
                        hi--;
                    }
                } else if (sum < 0) {
                    lo++;
                } else {
                    hi--;
                }
            }
        }
        return ans;
    }
};
