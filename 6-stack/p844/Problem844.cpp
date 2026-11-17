/**
 * @file Problem844.cpp
 * @brief LeetCode Problem 844: Backspace String Compare (Explicit Stack Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `s` and `t`, return `true` if they are equal when both are typed into empty
 * text editors. `'#'` means a backspace character.
 * 
 * Note that after backspacing an empty text, the text will remain empty.
 * 
 * Algorithm: Dual std::stack Simulation
 * - Maintain two stacks of characters `st1` and `st2` for `s` and `t` respectively.
 * - For each character `c` in `s`:
 *   - If `c == '#'`: pop from `st1` if `st1` is non-empty.
 *   - Otherwise: push `c` onto `st1`.
 * - For each character `c` in `t`:
 *   - If `c == '#'`: pop from `st2` if `st2` is non-empty.
 *   - Otherwise: push `c` onto `st2`.
 * - Return whether `st1 == st2`.
 * 
 * Time Complexity:  O(M + N) - Linear scan across both strings where M = s.length() and N = t.length().
 * Space Complexity: O(M + N) - Auxiliary stack storage for all non-backspaced characters.
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    /**
     * @brief Compares two strings after applying backspace '#' operations using stacks.
     * @param s First input string.
     * @param t Second input string.
     * @return bool True if both processed strings are identical, false otherwise.
     */
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        for (char c : s) {
            if (c == '#') {
                if (!st1.empty()) st1.pop();
            }
            else {
                st1.push(c);
            }
        }
        for (char c : t) {
            if (c == '#') {
                if (!st2.empty()) st2.pop();
            }
            else {
                st2.push(c);
            }
        }
        return st1 == st2;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard backspaces leading to identical strings
    string s1 = "ab#c", t1 = "ad#c";
    cout << "s = \"" << s1 << "\", t = \"" << t1 << "\" -> "
         << (sol.backspaceCompare(s1, t1) ? "true" : "false") << endl; // Expected: true ("ac" == "ac")

    // Test Case 2: Consecutive backspaces resulting in empty strings
    string s2 = "ab##", t2 = "c#d#";
    cout << "s = \"" << s2 << "\", t = \"" << t2 << "\" -> "
         << (sol.backspaceCompare(s2, t2) ? "true" : "false") << endl; // Expected: true ("" == "")

    // Test Case 3: Strings resolving to different characters
    string s3 = "a#c", t3 = "b";
    cout << "s = \"" << s3 << "\", t = \"" << t3 << "\" -> "
         << (sol.backspaceCompare(s3, t3) ? "true" : "false") << endl; // Expected: false ("c" != "b")

    // Test Case 4: Multiple backspaces on empty text
    string s4 = "###a", t4 = "a";
    cout << "s = \"" << s4 << "\", t = \"" << t4 << "\" -> "
         << (sol.backspaceCompare(s4, t4) ? "true" : "false") << endl; // Expected: true ("a" == "a")

    return 0;
}
