/**
 * @file Problem520Opt.java
 * @brief LeetCode Problem 520: Detect Capital (Indexed String Traversal with Constant Space)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * We define the usage of capitals in a word to be right when one of the following cases holds:
 * 1. All letters in this word are capitals, like "USA".
 * 2. All letters in this word are not capitals, like "leetcode".
 * 3. Only the first letter in this word is capital, like "Google".
 * 
 * Given a string `word`, return `true` if the usage of capitals in it is right.
 * 
 * Algorithm: Indexed Traversal (Zero Extra Memory)
 * - Traverse string using `charAt(i)` without allocating an extra character array.
 * - Count total uppercase characters in a single pass.
 * - Valid conditions:
 *   - `capitalCount == 0` or `capitalCount == n` (All lower or all upper)
 *   - `capitalCount == 1 && word.charAt(0) >= 'A' && word.charAt(0) <= 'Z'` (Only title capitalized)
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(1) - Constant auxiliary space without array allocation.
 */

public class Problem520Opt {
    /**
     * Detects if capital usage in the given word is valid using charAt indexing.
     * @param word Input word string.
     * @return true if capital usage conforms to rules, false otherwise.
     */
    public boolean detectCapitalUse(String word) {
        int n = word.length();
        int capitalCount = 0;
        for (int i = 0; i < n; i++) {
            char ch = word.charAt(i);

            if (ch >= 'A' && ch <= 'Z') {
                capitalCount++;
            }
        }
        if (capitalCount == 0 || capitalCount == n) {
            return true;
        }
        if (capitalCount == 1 &&
            word.charAt(0) >= 'A' &&
            word.charAt(0) <= 'Z') {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Problem520Opt sol = new Problem520Opt();
        System.out.println(sol.detectCapitalUse("USA"));
        System.out.println(sol.detectCapitalUse("FlaG"));
    }
}