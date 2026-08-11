class Solution {
public:
    bool isAlphaNumeric(char ch) {
        return (ch>='A' && ch<='Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
    }
    bool isPalindrome(string s) {
        int lo = 0, hi = s.length()-1;
        while (lo < hi) {
            if (isAlphaNumeric(s[lo]) && isAlphaNumeric(s[hi])) {
                if (tolower(s[lo]) != tolower(s[hi])) return false;
                lo++;
                hi--;
            } else {
                if (!isAlphaNumeric(s[lo])) lo++;
                else hi--;
            }
        }
        return true;
    }
};
