class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms, mt;
        for (char ch : s) ms[ch]++;
        for (char ch : t) mt[ch]++;
        return ms == mt;
    }
};
