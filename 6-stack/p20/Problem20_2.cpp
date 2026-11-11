/**
 * @file Problem20_2.cpp
 * @brief LeetCode Problem 20: Valid Parentheses (Optimized Expected Closing Bracket Stack)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`,
 * determine if the input string is valid.
 * 
 * Algorithm: Push Expected Closing Bracket
 * - Early exit: If `s.length()` is odd, it is impossible for all brackets to be paired, return `false`.
 * - Iterate through each character `c` in `s`:
 *   - When encountering an open bracket, push its corresponding *closing* bracket:
 *     - `'('` -> push `')'`
 *     - `'{'` -> push `'}'`
 *     - `'['` -> push `']'`
 *   - When encountering a closing bracket:
 *     - If the stack is empty OR `stack.top() != c`, return `false`.
 *     - Otherwise, pop the top element.
 * - Return `st.empty()`.
 * 
 * Time Complexity:  O(N) - Linear single pass with early exit on odd string length.
 * Space Complexity: O(N) - Stack stores at most N / 2 elements for valid strings.
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    /**
     * @brief Validates parentheses string by pushing expected closing brackets.
     * @param s Input string containing bracket characters.
     * @return true if valid, false otherwise.
     */
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;

        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(')');
            } else if (c == '{') {
                st.push('}');
            } else if (c == '[') {
                st.push(']');
            } else {
                if (st.empty() || st.top() != c) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;

    string s1 = "()";
    cout << "s = \"" << s1 << "\" -> " << (sol.isValid(s1) ? "true" : "false") << endl;

    string s2 = "()[]{}";
    cout << "s = \"" << s2 << "\" -> " << (sol.isValid(s2) ? "true" : "false") << endl;

    string s3 = "(]";
    cout << "s = \"" << s3 << "\" -> " << (sol.isValid(s3) ? "true" : "false") << endl;

    string s4 = "([])";
    cout << "s = \"" << s4 << "\" -> " << (sol.isValid(s4) ? "true" : "false") << endl;

    string s5 = "([)]";
    cout << "s = \"" << s5 << "\" -> " << (sol.isValid(s5) ? "true" : "false") << endl;

    return 0;
}
