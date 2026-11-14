/**
 * @file Problem205_2.cpp
 * @brief LeetCode Problem 205: Isomorphic Strings (Last-Seen Index Array Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `s` and `t`, determine if they are isomorphic.
 * 
 * Algorithm: Last-Seen Position Comparison
 * - Instead of directly storing character-to-character maps, record the 1-based index where each character was last seen.
 * - Allocate two fixed-size integer arrays of size 256 initialized to 0: `mapST` and `mapTS`.
 * - For each index `i`:
 *   - Character `a = s[i]`, `b = t[i]`.
 *   - If `mapST[a] != mapTS[b]`, the previous occurrences of `a` and `b` did not appear at the exact same relative position; return `false`.
 *   - Update `mapST[a] = i + 1` and `mapTS[b] = i + 1` (1-based to distinguish from default 0).
 * - Return `true`.
 * 
 * Time Complexity:  O(N) - Single pass over string length N with direct array index lookups.
 * Space Complexity: O(1) - Constant auxiliary space (two static arrays of size 256).
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if two strings are isomorphic by comparing last-seen indices.
     * @param s First input string.
     * @param t Second input string.
     * @return true if s and t are isomorphic, false otherwise.
     */
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        int mapST[256] = {0};
        int mapTS[256] = {0};
        for (size_t i = 0; i < s.size(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];
            if (mapST[a] != mapTS[b])
                return false;
            mapST[a] = static_cast<int>(i) + 1;
            mapTS[b] = static_cast<int>(i) + 1;
        }
        return true;
    }
};

int main() {
    Solution sol;

    string s1 = "egg", t1 = "add";
    cout << "s = \"" << s1 << "\", t = \"" << t1 << "\" -> " << (sol.isIsomorphic(s1, t1) ? "true" : "false") << endl; // true

    string s2 = "foo", t2 = "bar";
    cout << "s = \"" << s2 << "\", t = \"" << t2 << "\" -> " << (sol.isIsomorphic(s2, t2) ? "true" : "false") << endl; // false

    string s3 = "paper", t3 = "title";
    cout << "s = \"" << s3 << "\", t = \"" << t3 << "\" -> " << (sol.isIsomorphic(s3, t3) ? "true" : "false") << endl; // true

    string s4 = "badc", t4 = "baba";
    cout << "s = \"" << s4 << "\", t = \"" << t4 << "\" -> " << (sol.isIsomorphic(s4, t4) ? "true" : "false") << endl; // false

    return 0;
}
