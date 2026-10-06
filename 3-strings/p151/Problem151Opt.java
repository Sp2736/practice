/**
 * @file Problem151Opt.java
 * @brief LeetCode Problem 151: Reverse Words in a String (Reverse Scan Two-Pointer Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an input string `s`, reverse the order of the words.
 * A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.
 * Return a string of the words in reverse order concatenated by a single space.
 * 
 * Algorithm: Reverse Scan Substring Extraction
 * - Traverse string from right to left (`i = s.length() - 1`).
 * - Skip spaces to find the end of a word (`end = i`).
 * - Continue scanning left until space or beginning of string is found to determine the word boundary (`i + 1` to `end + 1`).
 * - Append space delimiter (if not first word) and append substring slice directly into `StringBuilder`.
 * - Eliminates intermediate array allocations from regex splits.
 * 
 * Time Complexity:  O(N) - Single backward pass over characters in string of length N.
 * Space Complexity: O(N) - Space for resulting StringBuilder output (no intermediate word arrays).
 */

public class Problem151Opt {
    /**
     * Reverses words in string s using reverse scanning and substring appending.
     * @param s Input string.
     * @return String containing words in reverse order joined by a single space.
     */
    public String reverseWords(String s) {
        StringBuilder result = new StringBuilder();
        int i = s.length() - 1;
        while (i >= 0) {
            while (i >= 0 && s.charAt(i) == ' ')
                i--;
            int end = i;
            while (i >= 0 && s.charAt(i) != ' ')
                i--;
            if (end >= 0) {
                if (result.length() > 0)
                    result.append(' ');

                result.append(s, i + 1, end + 1);
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        Problem151Opt sol = new Problem151Opt();
        System.out.println(sol.reverseWords("the sky is blue"));
        System.out.println(sol.reverseWords("  hello world  "));
        System.out.println(sol.reverseWords("a good   example"));
    }
}
