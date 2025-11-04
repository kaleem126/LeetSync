class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long result = 0;
        int sign = 1;

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Handle sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Read digits and build the number
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // 4. Clamp the value if it goes out of bounds
            if (sign * result <= INT_MIN) return INT_MIN;
            if (sign * result >= INT_MAX) return INT_MAX;
            i++;
        }

        return sign * result;
    }
};
