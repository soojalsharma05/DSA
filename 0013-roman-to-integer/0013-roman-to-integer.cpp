class Solution {
    static int val(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

public:
    int romanToInt(string s) {
        int sum = 0, prev = 0;
        for (int i = (int)s.size() - 1; i >= 0; i--) {
            int curr = val(s[i]);
            sum += (curr < prev) ? -curr : curr;
            prev = curr;
        }
        return sum;
    }
};