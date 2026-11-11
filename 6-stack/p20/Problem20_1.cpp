/**
 * @file Problem20_1.cpp
 * @brief LeetCode Problem 20: Valid Parentheses (Explicit Stack Condition Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`,
 * determine if the input string is valid.
 * An input string is valid if:
 * 1. Open brackets must be closed by the same type of brackets.
 * 2. Open brackets must be closed in the correct order.
 * 3. Every close bracket has a corresponding open bracket of the same type.
 * 
 * Algorithm: LIFO Stack with Explicit Matching Condition
 * - Traverse the string character by character.
 * - Push opening brackets `'('`, `'['`, `'{'` onto `std::stack<char>`.
 * - For closing brackets:
 *   - Return `false` immediately if the stack is empty (unmatched closing bracket).
 *   - Check if `brackets.top()` matches the corresponding closing bracket.
 *   - If matching, pop the top element; otherwise, return `false`.
 * - Return `brackets.empty()` to confirm all opened brackets were properly matched and closed.
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(N) - Worst case stack depth when all characters are opening brackets.
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    /**
     * @brief Validates if parenthesis combinations are correctly formed and nested.
     * @param s Input string containing bracket characters.
     * @return true if valid, false otherwise.
     */
    bool isValid(string s) {
        stack<char> brackets;
        for(size_t i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                brackets.push(s[i]);
            }
            else {
                if(brackets.empty()) return false;
                if((brackets.top() == '(' && s[i] == ')') || (brackets.top() == '[' && s[i] == ']') || (brackets.top() == '{' && s[i] == '}')) {
                    brackets.pop();
                }
                else {
                    return false;
                }
            }
        }
        return brackets.empty();
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
