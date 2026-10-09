/**
 * @file Problem2114.java
 * @brief LeetCode Problem 2114: Maximum Number of Words Found in Sentences (String Split Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
 * You are given an array of strings `sentences`, where each `sentences[i]` represents a single sentence.
 * Return the maximum number of words that appear in a single sentence.
 * 
 * Algorithm: String Split
 * - Iterate over each sentence in the array.
 * - Split each sentence by spaces using `sentences[i].split(" ")`.
 * - Compare the resulting array length `words.length` with `max` and update if greater.
 * 
 * Time Complexity:  O(N * L) - Where N is the number of sentences and L is the average sentence length.
 * Space Complexity: O(W) - Temporary array allocation for words in each sentence where W is word count.
 */

public class Problem2114 {
    /**
     * Finds the maximum number of words in a sentence using String.split.
     * @param sentences Array of sentence strings.
     * @return Maximum number of words found in any single sentence.
     */
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (int i = 0; i < sentences.length; i++) {
            String[] words = sentences[i].split(" ");
            if (words.length > max)
                max = words.length;
        }
        return max;
    }

    public static void main(String[] args) {
        Problem2114 sol = new Problem2114();
        String[] sentences1 = {
            "alice and bob love leetcode",
            "i think so too",
            "this is great thanks very much"
        };
        System.out.println("Max words: " + sol.mostWordsFound(sentences1));

        String[] sentences2 = {
            "please wait",
            "continue to fight",
            "continue to win"
        };
        System.out.println("Max words: " + sol.mostWordsFound(sentences2));
    }
}
