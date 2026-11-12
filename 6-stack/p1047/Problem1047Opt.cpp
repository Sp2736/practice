/**
 * @file Problem1047Opt.cpp
 * @brief LeetCode Problem 1047: Remove All Adjacent Duplicates In String (Two-Pointer In-Place O(1) Auxiliary Space)
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
 * 
 * Algorithm: Two-Pointer Fast/Slow In-Place Array Overwrite
 * - Use the input string `s` itself as the stack buffer:
 *   - `k` acts as the slow pointer / write head representing the current stack size.
 *   - `i` acts as the fast pointer scanning through `s`.
 * - For each character `s[i]`:
 *   - If `k > 0` and `s[k - 1] == s[i]`, the incoming character matches the top of our in-place stack:
 *     Decrement `k--` (simulating a pop).
 *   - Otherwise, overwrite `s[k] = s[i]` and increment `k++` (simulating a push).
 * - After scanning, resize `s` to length `k` via `s.resize(k)` and return `s`.
 * 
 * Time Complexity:  O(N) - Strictly single pass through the string of length N.
 * Space Complexity: O(1) - Constant auxiliary space, fully in-place within the input string buffer.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Removes adjacent duplicates in-place using two-pointer write index.
     * @param s Input string (modified in-place).
     * @return string De-duplicated string.
     */
    string removeDuplicates(string s) {
        int k = 0;
        for (size_t i = 0; i < s.length(); i++) {
            if (k > 0 && s[k - 1] == s[i]) {
                k--;
            }
            else {
                s[k] = s[i];
                k++;
            }
        }
        s.resize(k);
        return s;
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
