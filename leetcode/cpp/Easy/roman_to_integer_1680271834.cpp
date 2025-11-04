class Solution {
public:
    int value(char r) {
        if (r == 'I') return 1;
        if (r == 'V') return 5;
        if (r == 'X') return 10;
        if (r == 'L') return 50;
        if (r == 'C') return 100;
        if (r == 'D') return 500;
        if (r == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            int curr = value(s[i]);
            int next = (i + 1 < n) ? value(s[i + 1]) : 0;

            if (curr < next)
                total -= curr;
            else
                total += curr;
        }

        return total;
    }
};
