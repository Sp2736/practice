/**
 * @file Problem14_2.java
 * @brief LeetCode Problem 14: Longest Common Prefix (Vertical Scanning)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 * 
 * Algorithm: Vertical Scanning
 * - Scan through character indices `i` of the first string `strs[0]`.
 * - Compare character `strs[0].charAt(i)` across all other strings `strs[j]` at column `i`.
 * - If index `i` equals the length of `strs[j]` or the character doesn't match, return `strs[0].substring(0, i)`.
 * - If loop completes without mismatch, the entire first string `strs[0]` is the prefix.
 * 
 * Time Complexity:  O(S) where S is the sum of characters in all strings (in best case O(N * minLen) with early exit).
 * Space Complexity: O(1) auxiliary space beyond the returned substring.
 */

public class Problem14_2 {
    /**
     * Finds the longest common prefix using vertical column-by-column character scanning.
     * @param strs Array of strings to examine.
     * @return Longest common prefix string.
     */
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (i >= strs[j].length() || strs[j].charAt(i) != c)
                    return strs[0].substring(0, i);
            }
        }
        return strs[0];
    }

    public static void main(String[] args) {
        Problem14_2 p14 = new Problem14_2();

        String[] strs1 = { "flower", "flow", "flight" };
        System.out.println("Test 1: " + p14.longestCommonPrefix(strs1)); // Expected: "fl"

        String[] strs2 = { "dog", "racecar", "car" };
        System.out.println("Test 2: " + p14.longestCommonPrefix(strs2)); // Expected: ""

        String[] strs3 = { "interspecies", "interstellar", "interstate" };
        System.out.println("Test 3: " + p14.longestCommonPrefix(strs3)); // Expected: "inters"
    }
}