/**
 * @file Problem151.java
 * @brief LeetCode Problem 151: Reverse Words in a String (Regex Split & StringBuilder Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an input string `s`, reverse the order of the words.
 * A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.
 * Return a string of the words in reverse order concatenated by a single space.
 * 
 * Note that `s` may contain leading or trailing spaces or multiple spaces between two words.
 * The returned string should only have a single space separating the words. Do not include any extra spaces.
 * 
 * Algorithm: Regex Split & Reverse Traversal
 * - Trim leading/trailing whitespace and split the string on whitespace sequences using regex `\\s+`.
 * - Iterate through the words array in reverse order and append each word with a trailing space.
 * - Return the trimmed reconstructed string.
 * 
 * Time Complexity:  O(N) - Splitting string and building reversed result takes linear time where N is string length.
 * Space Complexity: O(N) - Space allocated for array of words and StringBuilder.
 */

public class Problem151 {
    /**
     * Reverses words in string s using regex whitespace splitting.
     * @param s Input string.
     * @return String containing words in reverse order joined by a single space.
     */
    public String reverseWords(String s) {
        String[] str = s.trim().split("\\s+");
        StringBuilder result = new StringBuilder();
        for (int i = str.length - 1; i >= 0; i--) {
            result.append(str[i]).append(" ");
        }
        return result.toString().trim();
    }

    public static void main(String[] args) {
        Problem151 sol = new Problem151();
        System.out.println(sol.reverseWords("the sky is blue"));
        System.out.println(sol.reverseWords("  hello world  "));
        System.out.println(sol.reverseWords("a good   example"));
    }
}
