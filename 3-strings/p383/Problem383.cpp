/**
 * @file Problem383.cpp
 * @brief LeetCode Problem 383: Ransom Note (Frequency Array Hash Table Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed
 * by using the letters from `magazine` and `false` otherwise.
 * 
 * Each letter in `magazine` can only be used once in `ransomNote`.
 * 
 * Algorithm: Fixed-Size Frequency Array (Direct Hash Map)
 * - Early Exit: If `ransomNote.length() > magazine.length()`, it is impossible to construct, return `false`.
 * - Allocate a fixed-size integer array `freq[26]` initialized to 0 to store character counts of `magazine`.
 * - Count frequencies of each character in `magazine`: `freq[c - 'a']++`.
 * - Traverse `ransomNote`:
 *   - Decrement frequency: `freq[c - 'a']--`.
 *   - If the count drops below 0, `magazine` lacks enough occurrences of character `c`; return `false`.
 * - If all characters in `ransomNote` are satisfied, return `true`.
 * 
 * Time Complexity:  O(M + N) - Where M is length of magazine and N is length of ransomNote.
 * Space Complexity: O(1) - Constant auxiliary storage (fixed array of 26 integers).
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Determines if ransomNote can be constructed from magazine characters.
     * @param ransomNote String to be constructed.
     * @param magazine Available letters source string.
     * @return true if constructible, false otherwise.
     */
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        int freq[26] = {0};
        for (char c : magazine) {
            freq[c - 'a']++;
        }
        for (char c : ransomNote) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    string r1 = "a", m1 = "b";
    cout << "ransomNote = \"" << r1 << "\", magazine = \"" << m1 << "\" -> "
         << (sol.canConstruct(r1, m1) ? "true" : "false") << " (Expected: false)" << endl;

    string r2 = "aa", m2 = "ab";
    cout << "ransomNote = \"" << r2 << "\", magazine = \"" << m2 << "\" -> "
         << (sol.canConstruct(r2, m2) ? "true" : "false") << " (Expected: false)" << endl;

    string r3 = "aa", m3 = "aab";
    cout << "ransomNote = \"" << r3 << "\", magazine = \"" << m3 << "\" -> "
         << (sol.canConstruct(r3, m3) ? "true" : "false") << " (Expected: true)" << endl;

    return 0;
}
