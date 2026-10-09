/**
 * @file Problem2114Opt.java
 * @brief LeetCode Problem 2114: Maximum Number of Words Found in Sentences (Space Counting Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
 * You are given an array of strings `sentences`, where each `sentences[i]` represents a single sentence.
 * Return the maximum number of words that appear in a single sentence.
 * 
 * Algorithm: Direct Space Character Counting
 * - Since words are separated by a single space without leading/trailing spaces, the number of words in a sentence equals (number of spaces + 1).
 * - Traverse each sentence character by character using `charAt(i)`.
 * - Count spaces and track the maximum word count across all sentences using `Math.max`.
 * - Avoids regex parsing and heap allocations from `String.split()`.
 * 
 * Time Complexity:  O(N * L) - Single pass over characters where N is sentence count and L is sentence length.
 * Space Complexity: O(1) - Constant auxiliary space without object allocations.
 */

public class Problem2114Opt {
    /**
     * Finds the maximum number of words in a sentence by counting spaces in-place.
     * @param sentences Array of sentence strings.
     * @return Maximum number of words found in any single sentence.
     */
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (String sentence : sentences) {
            int count = 1;
            for (int i = 0; i < sentence.length(); i++) {
                if (sentence.charAt(i) == ' ')
                    count++;
            }
            max = Math.max(max, count);
        }
        return max;
    }

    public static void main(String[] args) {
        Problem2114Opt sol = new Problem2114Opt();
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
