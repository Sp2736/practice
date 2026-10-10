/**
 * @file Problem14_1.java
 * @brief LeetCode Problem 14: Longest Common Prefix (Prefix Building with startsWith)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 * 
 * Algorithm: Incremental Prefix Construction
 * - Initialize prefix as an empty string.
 * - Incrementally append characters from the first string `strs[0]`.
 * - For each candidate prefix, verify if all remaining strings in `strs` start with it using `startsWith()`.
 * - When any string fails the check, return the prefix minus the last appended character.
 * 
 * Time Complexity:  O(S) where S is the sum of all characters in all strings (O(M * N) with M = length of prefix, N = number of strings).
 * Space Complexity: O(M) auxiliary space for storing prefix strings during concatenation.
 */

public class Problem14_1 {
    /**
     * Finds the longest common prefix by incrementally appending characters and checking prefixes.
     * @param strs Array of strings to examine.
     * @return Longest common prefix string.
     */
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        String prefix = "";
        for (int i = 0; i < strs[0].length(); i++) {
            prefix += strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (!strs[j].startsWith(prefix)) {
                    return prefix.substring(0, prefix.length() - 1);
                }
            }
        }
        return prefix;
    }

    public static void main(String[] args) {
        Problem14_1 p14 = new Problem14_1();

        String[] strs1 = { "flower", "flow", "flight" };
        System.out.println("Test 1: " + p14.longestCommonPrefix(strs1)); // Expected: "fl"

        String[] strs2 = { "dog", "racecar", "car" };
        System.out.println("Test 2: " + p14.longestCommonPrefix(strs2)); // Expected: ""

        String[] strs3 = { "interspecies", "interstellar", "interstate" };
        System.out.println("Test 3: " + p14.longestCommonPrefix(strs3)); // Expected: "inters"
    }
}