class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<int>> m;
        for (int i=0;i<strs.size();i++) {
            string p = strs[i];
            sort(p.begin(), p.end());
            m[p].push_back(i);
        }
        for (auto& [key, value] : m) {
            vector<string> inner;
            for (int i=0;i<value.size();i++) {
                inner.push_back(strs[value[i]]);
            }
            ans.push_back(inner);
        }
        return ans;
    }
};
