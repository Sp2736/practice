/**
 * @file Problem1221_1.java
 * @brief LeetCode Problem 1221: Split a String in Balanced Strings (Dual Counter Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
 * Given a balanced string `s`, split it into some number of substrings such that:
 * - Each substring is balanced.
 * Return the maximum number of balanced strings you can obtain.
 * 
 * Algorithm: Dual Counter Tracking
 * - Maintain two counters `r` and `l` to track the occurrences of 'R' and 'L' respectively.
 * - Iterate through the string character by character.
 * - When `r == l` (and neither is zero), a balanced substring is found:
 *   - Increment the total count `num`.
 *   - Reset `r` and `l` to 0.
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(1) - Constant auxiliary memory.
 */

public class Problem1221_1 {
    /**
     * Splits a balanced string into maximum number of balanced substrings using dual counters.
     * @param s Input balanced string containing only 'R' and 'L'.
     * @return Maximum number of balanced substrings.
     */
    public int balancedStringSplit(String s) {
        int num = 0;
        int r = 0;
        int l = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R') {
                r++;
            } else if (s.charAt(i) == 'L') {
                l++;
            }
            if (r == l && r != 0 && l != 0) {
                num++;
                r = 0;
                l = 0;
            }
        }
        return num;
    }

    public static void main(String[] args) {
        Problem1221_1 sol = new Problem1221_1();
        System.out.println("Balanced string splits (RLRRLLRLRL): " + sol.balancedStringSplit("RLRRLLRLRL"));
        System.out.println("Balanced string splits (RLLLLRRRLR): " + sol.balancedStringSplit("RLLLLRRRLR"));
        System.out.println("Balanced string splits (LLLRRR): " + sol.balancedStringSplit("LLLRRR"));
        System.out.println("Balanced string splits (RLRRRLLRLL): " + sol.balancedStringSplit("RLRRRLLRLL"));
    }
}