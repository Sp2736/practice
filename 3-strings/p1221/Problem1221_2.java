/**
 * @file Problem1221_2.java
 * @brief LeetCode Problem 1221: Split a String in Balanced Strings (Single Balance Variable Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal single-variable balance state).
 * 
 * @details
 * Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
 * Given a balanced string `s`, split it into some number of substrings such that:
 * - Each substring is balanced.
 * Return the maximum number of balanced strings you can obtain.
 * 
 * Algorithm: Single Balance Variable Tracking
 * - Maintain a single integer variable `balance = 0`.
 * - For each character in the string:
 *   - Increment `balance` if character is 'R'.
 *   - Decrement `balance` if character is 'L'.
 * - Whenever `balance == 0`, an equal count of 'R' and 'L' has been matched:
 *   - Increment `count`.
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(1) - Constant auxiliary memory.
 */

public class Problem1221_2 {
    /**
     * Splits a balanced string into maximum number of balanced substrings using a single balance accumulator.
     * @param s Input balanced string containing only 'R' and 'L'.
     * @return Maximum number of balanced substrings.
     */
    public int balancedStringSplit(String s) {
        int balance = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R')
                balance++;
            else
                balance--;
            if (balance == 0)
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Problem1221_2 sol = new Problem1221_2();
        System.out.println("Balanced string splits (RLRRLLRLRL): " + sol.balancedStringSplit("RLRRLLRLRL"));
        System.out.println("Balanced string splits (RLLLLRRRLR): " + sol.balancedStringSplit("RLLLLRRRLR"));
        System.out.println("Balanced string splits (LLLRRR): " + sol.balancedStringSplit("LLLRRR"));
        System.out.println("Balanced string splits (RLRRRLLRLL): " + sol.balancedStringSplit("RLRRRLLRLL"));
    }
}