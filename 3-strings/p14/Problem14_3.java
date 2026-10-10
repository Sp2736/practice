/**
 * @file Problem14_3.java
 * @brief LeetCode Problem 14: Longest Common Prefix (Horizontal Scanning / Prefix Shrinking)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 * 
 * Algorithm: Horizontal Scanning
 * - Initialize candidate prefix as the complete first string `strs[0]`.
 * - Iterate through each subsequent string `strs[i]`:
 *   - While `strs[i]` does not start with `prefix`, truncate the last character of `prefix`.
 *   - If `prefix` becomes empty, return "" immediately (no common prefix exists).
 * - Return the final surviving `prefix`.
 * 
 * Time Complexity:  O(S) where S is the sum of characters across all strings.
 * Space Complexity: O(1) auxiliary space (or O(M) for intermediate prefix substrings).
 */

public class Problem14_3 {
    /**
     * Finds the longest common prefix by iteratively shrinking the prefix against each string.
     * @param strs Array of strings to examine.
     * @return Longest common prefix string.
     */
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++) {
            while (!strs[i].startsWith(prefix)) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty()) {
                    return "";
                }
            }
        }
        return prefix;
    }

    public static void main(String[] args) {
        Problem14_3 p14 = new Problem14_3();

        String[] strs1 = { "flower", "flow", "flight" };
        System.out.println("Test 1: " + p14.longestCommonPrefix(strs1)); // Expected: "fl"

        String[] strs2 = { "dog", "racecar", "car" };
        System.out.println("Test 2: " + p14.longestCommonPrefix(strs2)); // Expected: ""

        String[] strs3 = { "interspecies", "interstellar", "interstate" };
        System.out.println("Test 3: " + p14.longestCommonPrefix(strs3)); // Expected: "inters"
    }
}