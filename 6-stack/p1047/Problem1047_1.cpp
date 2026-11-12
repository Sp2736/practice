/**
 * @file Problem1047_1.cpp
 * @brief LeetCode Problem 1047: Remove All Adjacent Duplicates In String (Stack Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are given a string `s` consisting of lowercase English letters. A duplicate removal consists
 * of choosing two adjacent and equal letters and removing them.
 * 
 * We repeatedly make duplicate removals on `s` until we no longer can.
 * Return the final string after all such duplicate removals have been made.
 * It can be proven that the answer is unique.
 * 
 * Algorithm: std::stack Elimination & Reverse String Construction
 * - Maintain a `std::stack<char> str` of characters.
 * - Iterate through each character `s[i]`:
 *   - If the stack is non-empty and `str.top() == s[i]`, an adjacent duplicate is formed: pop the stack.
 *   - Otherwise, push `s[i]` onto the stack.
 * - After processing all characters, empty the stack into a `result` string.
 * - Because the stack is LIFO, reverse `result` to restore original sequence order.
 * 
 * Time Complexity:  O(N) - Linear pass through the string of length N, followed by stack emptying and string reversal.
 * Space Complexity: O(N) - Auxiliary stack storage up to N characters.
 */

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    /**
     * @brief Removes adjacent duplicates using a character stack.
     * @param s Input string.
     * @return string De-duplicated string.
     */
    string removeDuplicates(string s) {
        stack<char> str;
        for (size_t i = 0; i < s.size(); i++) {
            if (!str.empty() && str.top() == s[i]) {
                str.pop();
            } else {
                str.push(s[i]);
            }
        }
        string result;
        result.reserve(str.size());
        while (!str.empty()) {
            result += str.top();
            str.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;

    string s1 = "abbaca";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: \"" << sol.removeDuplicates(s1) << "\"" << endl; // Expected: "ca"

    string s2 = "azxxzy";
    cout << "\nInput: \"" << s2 << "\"" << endl;
    cout << "Output: \"" << sol.removeDuplicates(s2) << "\"" << endl; // Expected: "ay"

    return 0;
}


int main() {
    Solution sol;

    string s1 = "abbaca";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: \"" << sol.removeDuplicates(s1) << "\"" << endl; // Expected: "ca"

    string s2 = "azxxzy";
    cout << "\nInput: \"" << s2 << "\"" << endl;
    cout << "Output: \"" << sol.removeDuplicates(s2) << "\"" << endl; // Expected: "ay"

    return 0;
}