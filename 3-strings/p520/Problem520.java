/**
 * @file Problem520.java
 * @brief LeetCode Problem 520: Detect Capital (Character Array Iteration & Counter Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * We define the usage of capitals in a word to be right when one of the following cases holds:
 * 1. All letters in this word are capitals, like "USA".
 * 2. All letters in this word are not capitals, like "leetcode".
 * 3. Only the first letter in this word is capital, like "Google".
 * 
 * Given a string `word`, return `true` if the usage of capitals in it is right.
 * 
 * Algorithm: Character Array Iteration
 * - Convert string to character array `word.toCharArray()`.
 * - Iterate through characters with an index counter to track uppercase count and if the first character is capitalized.
 * - Validate the three conditions:
 *   - `capsCounter == 0` (All lowercase)
 *   - `capsCounter == word.length()` (All uppercase)
 *   - `firstCap && capsCounter == 1` (Only first letter capitalized)
 * 
 * Time Complexity:  O(N) - Single pass through the string of length N.
 * Space Complexity: O(N) - Character array allocated by toCharArray().
 */

public class Problem520 {
    /**
     * Detects if capital usage in the given word is valid.
     * @param word Input word string.
     * @return true if capital usage conforms to rules, false otherwise.
     */
    public boolean detectCapitalUse(String word) {
        int capsCounter = 0;
        boolean firstCap = false;
        int idx = 0;
        for (char c : word.toCharArray()) {
            if (c >= 'A' && c <= 'Z') {
                if (idx == 0)
                    firstCap = true;
                capsCounter++;
            }
            idx++;
        }
        if (capsCounter == 0) {
            return true;
        }
        else if (capsCounter == word.length()) {
            return true;
        }
        else if (firstCap && capsCounter == 1) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Problem520 sol = new Problem520();
        System.out.println(sol.detectCapitalUse("USA"));
        System.out.println(sol.detectCapitalUse("FlaG"));
    }
}