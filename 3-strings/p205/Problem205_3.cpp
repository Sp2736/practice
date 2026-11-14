/**
 * @file Problem205_3.cpp
 * @brief LeetCode Problem 205: Isomorphic Strings (Direct std::array Char Lookup Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `s` and `t`, determine if they are isomorphic.
 * 
 * Algorithm: Dual Fixed-Size Array Character Mapping
 * - Allocate two `std::array<char, 256>` zero-initialized arrays: `f` (s -> t) and `f2` (t -> s).
 * - For each index `i`:
 *   - Character `a = s[i]`, `b = t[i]`.
 *   - If both `f[a] == '\0'` and `f2[b] == '\0'`, neither character has been mapped yet:
 *     Establish mapping `f[a] = b` and `f2[b] = a`.
 *   - Else if either `f[a] != b` or `f2[b] != a`, there is a mapping conflict; return `false`.
 * - Return `true`.
 * 
 * Time Complexity:  O(N) - Strictly single pass through strings with O(1) direct array indexing.
 * Space Complexity: O(1) - Constant auxiliary space (512 bytes total for both arrays).
 */

#include <iostream>
#include <string>
#include <array>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if two strings are isomorphic using dual std::array mapping.
     * @param s First input string.
     * @param t Second input string.
     * @return true if s and t are isomorphic, false otherwise.
     */
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        array<char, 256> f{};
        array<char, 256> f2{};
        for (size_t i = 0; i < s.size(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];
            if (f[a] == '\0' && f2[b] == '\0') {
                f[a] = b;
                f2[b] = a;
            } else if (f[a] != b || f2[b] != a) {
                return false;
            }
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
