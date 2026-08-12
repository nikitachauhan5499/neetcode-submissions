class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char> set;
        int lo = 0, hi = 0;
        int maxi = 0;
        while (hi < str.length()) {
                while (set.find(str[hi]) != set.end()) {
                    set.erase(str[lo]);
                    lo++;
                }
                set.insert(str[hi]);
                maxi = max(maxi, (int)set.size());
                hi++;
                
            
        }
        return maxi;
    }
};
