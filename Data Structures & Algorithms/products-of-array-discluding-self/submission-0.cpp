class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int mult = 1LL;
        int z = 0;
        for (int x : nums) {
            if (x != 0)
                mult *= x;
            else z++;
        }
        vector<int> ans;
        for (int c : nums) {
            if (z == 0)
                ans.push_back(mult/(1LL*c));
            else if (z == 1) {
                if (c == 0) {
                    ans.push_back(mult);
                } else {
                    ans.push_back(0);
                }
            } else ans.push_back(0);
        }
        return ans;
    }
};
