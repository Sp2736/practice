/**
 * @file Problem125Opt.java
 * @brief LeetCode Problem 125: Valid Palindrome (Two-Pointer In-Place Validation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters
 * and removing all non-alphanumeric characters, it reads the same forward and backward.
 * 
 * Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.
 * 
 * Algorithm: Two Pointers (In-Place)
 * - Place `left` pointer at 0 and `right` pointer at `s.length() - 1`.
 * - Increment `left` until a valid letter or digit is encountered using `Character.isLetterOrDigit()`.
 * - Decrement `right` until a valid letter or digit is encountered.
 * - Compare characters ignoring case using `Character.toLowerCase()`.
 * - If mismatch, return `false`.
 * - If pointers cross without mismatches, return `true`.
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(1) - Constant auxiliary space, no extra strings or buffers allocated.
 */

public class Problem125Opt {
    /**
     * Determines if a given string is a palindrome using two pointers in-place.
     * @param s Input string.
     * @return true if s is a valid palindrome, false otherwise.
     */
    public boolean isPalindrome(String s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            while (left < right && !Character.isLetterOrDigit(s.charAt(left)))
                left++;
            while (left < right && !Character.isLetterOrDigit(s.charAt(right)))
                right--;
            if (Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    public static void main(String[] args) {
        Problem125Opt sol = new Problem125Opt();
        System.out.println(sol.isPalindrome("A man, a plan, a canal: Panama"));
        System.out.println(sol.isPalindrome("race a car"));
    }
}
