/**
 * @file Problem242.java
 * @brief LeetCode Problem 242: Valid Anagram (Frequency Array Counter)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
 * typically using all the original letters exactly once.
 * 
 * Algorithm: Fixed-Size Frequency Counting
 * - Quick check: If lengths of `s` and `t` differ, return false immediately.
 * - Create a frequency count array of size 26 for lowercase English letters.
 * - Increment frequency counts for each character in string `s`.
 * - Decrement frequency counts for each character in string `t`.
 * - Traverse the frequency array; if any entry is non-zero, strings are not anagrams.
 * - Return true if all counts balance to zero.
 * 
 * Time Complexity:  O(N) - Linear scan of strings of length N and constant check of 26 letters.
 * Space Complexity: O(1) - Fixed 26-element array regardless of input string length.
 */

public class Problem242 {
    /**
     * Determines if string t is an anagram of string s using frequency counting.
     * @param s The source string.
     * @param t The target string.
     * @return true if t is an anagram of s, false otherwise.
     */
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length())
            return false;
        int[] count = new int[26];
        for (int i = 0; i < s.length(); i++) {
            int j = s.charAt(i) - 'a';
            count[j]++;
        }
        for (int i = 0; i < t.length(); i++) {
            int j = t.charAt(i) - 'a';
            count[j]--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Problem242 sol = new Problem242();

        String s1 = "anagram";
        String t1 = "nagaram";
        System.out.println("Test 1 (\"" + s1 + "\", \"" + t1 + "\"): " + sol.isAnagram(s1, t1)); // Expected: true

        String s2 = "rat";
        String t2 = "car";
        System.out.println("Test 2 (\"" + s2 + "\", \"" + t2 + "\"): " + sol.isAnagram(s2, t2)); // Expected: false

        String s3 = "a";
        String t3 = "ab";
        System.out.println("Test 3 (\"" + s3 + "\", \"" + t3 + "\"): " + sol.isAnagram(s3, t3)); // Expected: false
    }
}