/**
 * @file Problem125.java
 * @brief LeetCode Problem 125: Valid Palindrome (Regex Sanitization & String Reversal Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters
 * and removing all non-alphanumeric characters, it reads the same forward and backward.
 * Alphanumeric characters include letters and numbers.
 * 
 * Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.
 * 
 * Algorithm: Regex Sanitization & String Reversal
 * - Sanitize string by removing all non-alphanumeric characters using regex `[^a-zA-Z0-9]` and convert to lowercase.
 * - Reverse the cleaned string using `StringBuilder.reverse()`.
 * - Compare original cleaned string with the reversed string.
 * 
 * Time Complexity:  O(N) - Where N is the length of string s (regex replace + reverse + string compare).
 * Space Complexity: O(N) - Space allocated for sanitized string and reversed string copy.
 */

public class Problem125 {
    /**
     * Determines if a given string is a palindrome after sanitizing non-alphanumerics.
     * @param s Input string.
     * @return true if s is a valid palindrome, false otherwise.
     */
    public boolean isPalindrome(String s) {
        if (s == null)
            return true;
        s = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        String reversedStr = new StringBuilder(s).reverse().toString();
        return s.equalsIgnoreCase(reversedStr);
    }

    public static void main(String[] args) {
        Problem125 sol = new Problem125();
        System.out.println(sol.isPalindrome("A man, a plan, a canal: Panama"));
        System.out.println(sol.isPalindrome("race a car"));
    }
}