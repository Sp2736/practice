/**
 * @file problem-227-opt.cpp
 * @brief LeetCode Problem 227: Basic Calculator II (Optimized O(1) Auxiliary Space Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given a string `s` which represents an expression, evaluate this expression and return its value.
 * 
 * Algorithm: Single Pass In-Place Running Total & Last-Term Tracking
 * - Maintain running sum `ans`, previous term `prev`, and current operand `curr`.
 * - For '+' or '-': add `prev` to `ans`, update `prev` to `curr` or `-curr`.
 * - For '*' or '/': update `prev` in-place (`prev * curr` or `prev / curr`) without stack operations.
 * - After processing all characters, add final `prev` to `ans`.
 * 
 * Time Complexity:  O(N) - Single linear scan.
 * Space Complexity: O(1) - Auxiliary space used is constant (no stack allocated).
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        long long ans = 0;
        long long curr = 0;
        long long prev = 0;
        char sign = '+';

        for (int i = 0; i <= s.size(); i++) {
            char c = (i == s.size() ? '+' : s[i]);

            if (isdigit(c)) {
                curr = curr * 10 + (c - '0');
            }
            else if (c == ' ') {
                continue;
            }
            else {
                if (sign == '+') {
                    ans += prev;
                    prev = curr;
                }
                else if (sign == '-') {
                    ans += prev;
                    prev = -curr;
                }
                else if (sign == '*') {
                    prev = prev * curr;
                }
                else {
                    prev = prev / curr;
                }

                sign = c;
                curr = 0;
            }
        }

        ans += prev;

        return ans;
    }
};

int main() {
    Solution sol;
    string expr = "3+2*2";
    cout << "Expression: \"" << expr << "\" -> Result: " << sol.calculate(expr) << endl;
    return 0;
}