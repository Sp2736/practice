/**
 * @file Problem205_1.cpp
 * @brief LeetCode Problem 205: Isomorphic Strings (Two Hash Maps Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `s` and `t`, determine if they are isomorphic.
 * Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.
 * All occurrences of a character must be replaced with another character while preserving the order of characters.
 * No two characters may map to the same character, but a character may map to itself.
 * 
 * Algorithm: Two Hash Maps Bijection Tracking
 * - Check if `s.size() != t.size()`, returning false if lengths differ.
 * - Use two unordered maps `mapST` (s -> t) and `mapTS` (t -> s) to ensure a one-to-one (bijective) mapping.
 * - For each index `i`:
 *   - Character `a = s[i]`, `b = t[i]`.
 *   - If `mapST` already contains `a` and `mapST[a] != b`, mapping is invalid; return `false`.
 *   - If `mapTS` already contains `b` and `mapTS[b] != a`, mapping is invalid; return `false`.
 *   - Record `mapST[a] = b` and `mapTS[b] = a`.
 * - If all characters are mapped consistently, return `true`.
 * 
 * Time Complexity:  O(N) - Linear pass through strings with O(1) average hash map operations.
 * Space Complexity: O(K) - Up to O(min(N, Σ)) space where Σ is the alphabet size (ASCII).
 */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if two strings are isomorphic using two unordered_maps.
     * @param s First input string.
     * @param t Second input string.
     * @return true if s and t are isomorphic, false otherwise.
     */
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;
        for (size_t i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];
            if (mapST.count(a) && mapST[a] != b) {
                return false;
            }
            if (mapTS.count(b) && mapTS[b] != a) {
                return false;
            }
            mapST[a] = b;
            mapTS[b] = a;
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
