/**
 * @file Problem1047_2.cpp
 * @brief LeetCode Problem 1047: Remove All Adjacent Duplicates In String (Optimal In-Place String Stack)
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
 * Algorithm: String as a Dynamic Stack
 * - Use a `std::string result` directly as a LIFO stack via `back()`, `push_back()`, and `pop_back()`.
 * - For each character `c` in `s`:
 *   - If `!result.empty()` and `result.back() == c`, remove the duplicate by `result.pop_back()`.
 *   - Otherwise, append `c` via `result.push_back(c)`.
 * - Eliminates stack wrapper overhead, intermediate container copying, and post-reversal.
 * 
 * Time Complexity:  O(N) - Strictly single pass through string `s` with O(1) amortized string operations.
 * Space Complexity: O(N) - Auxiliary output string memory, with O(1) extra auxiliary space beyond the result.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Removes adjacent duplicates using std::string directly as a stack.
     * @param s Input string.
     * @return string De-duplicated string.
     */
    string removeDuplicates(string s) {
        string result;
        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
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