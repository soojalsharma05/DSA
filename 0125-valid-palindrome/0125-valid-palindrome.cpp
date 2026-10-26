class Solution {
public:
    bool checkpalin(string &s, int i, int n) {
    if (i >= n - 1) return true;
    if (!isalnum(s[i])) return checkpalin(s, i + 1, n);
    if (!isalnum(s[n - 1])) return checkpalin(s, i, n - 1);
    if (tolower(s[i]) == tolower(s[n - 1])) {
        return checkpalin(s, i + 1, n - 1);
    }
    return false;
    }

    bool isPalindrome(string s) {
        if (s.size()==1) return true;
        return checkpalin(s,0,s.size());
    }
};