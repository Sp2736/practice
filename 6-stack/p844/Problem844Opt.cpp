/**
 * @file Problem844Opt.cpp
 * @brief LeetCode Problem 844: Backspace String Compare (Two-Pointer Backward Scan O(1) Auxiliary Space)
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
 * Algorithm: Two-Pointer Backward Traversal with Skip Counters
 * - Scan both strings from right to left (indices `i = s.length() - 1` and `j = t.length() - 1`):
 *   - Backspaces delete preceding characters, so moving backwards naturally accounts for deletions.
 *   - Maintain skip counters `skipS` and `skipT`.
 *   - For string `s`, move `i` backwards:
 *     - If `s[i] == '#'`: increment `skipS` and decrement `i`.
 *     - Else if `skipS > 0`: decrement `skipS` and decrement `i` (consume skipped character).
 *     - Otherwise: valid character found, break.
 *   - Repeat analogous logic for string `t` with `skipT` and `j`.
 *   - Compare current valid characters:
 *     - If both indices are valid (`i >= 0 && j >= 0`) and `s[i] != t[j]`, return `false`.
 *     - If one string has run out of characters while the other has not (`(i >= 0) != (j >= 0)`), return `false`.
 *   - Decrement both pointers `i--` and `j--` to continue checking the next characters.
 * - If the loop completes without mismatches, return `true`.
 * 
 * Time Complexity:  O(M + N) - Strictly single pass through both strings.
 * Space Complexity: O(1) - Constant auxiliary space, using only pointer indices and integer skip counters.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Compares two strings after backspaces in O(1) space using reverse two pointers.
     * @param s First input string.
     * @param t Second input string.
     * @return bool True if both processed strings are identical, false otherwise.
     */
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1;
        int j = t.size() - 1;
        while (i >= 0 || j >= 0) {
            int skipS = 0, skipT = 0;
            while (i >= 0) {
                if (s[i] == '#') {
                    skipS++;
                    i--;
                }
                else if (skipS > 0) {
                    skipS--;
                    i--;
                }
                else break;
            }
            while (j >= 0) {
                if (t[j] == '#') {
                    skipT++;
                    j--;
                }
                else if (skipT > 0) {
                    skipT--;
                    j--;
                }
                else break;
            }
            if (i >= 0 && j >= 0 && s[i] != t[j])
                return false;
            if ((i >= 0) != (j >= 0))
                return false;
            i--;
            j--;
        }
        return true;
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
