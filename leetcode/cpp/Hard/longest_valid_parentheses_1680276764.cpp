class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1); // Initialize with -1 to handle base case
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else {
                stk.pop(); // Pop a previous '(' index
                if (stk.empty()) {
                    stk.push(i); // No match, mark this ')' as new base
                } else {
                    maxLen = max(maxLen, i - stk.top()); // Update max length
                }
            }
        }

        return maxLen;
    }
};
