/**
 * @file Problem771_1.java
 * @brief LeetCode Problem 771: Jewels and Stones (Brute Force Nested Loop Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have.
 * Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.
 * Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.
 * 
 * Algorithm: Nested Loop Comparison
 * - Iterate through each character in `stones`.
 * - For each stone, iterate through `jewels` to check if a match exists.
 * - If found, increment counter and break early to the next stone.
 * 
 * Time Complexity:  O(N * M) - Where N is the length of stones and M is the length of jewels.
 * Space Complexity: O(1) - Constant auxiliary memory.
 */

public class Problem771_1 {
    /**
     * Counts how many stones are jewels using nested loops.
     * @param jewels String containing jewel character types.
     * @param stones String containing stones in possession.
     * @return Number of stones that are jewels.
     */
    public int numJewelsInStones(String jewels, String stones) {
        int counter = 0;
        for (int i = 0; i < stones.length(); i++) {
            for (int j = 0; j < jewels.length(); j++) {
                if (stones.charAt(i) == jewels.charAt(j)) {
                    counter++;
                    break;
                }
            }
        }
        return counter;
    }

    public static void main(String[] args) {
        Problem771_1 sol = new Problem771_1();
        System.out.println("Jewels count (aA, aAAbbbb): " + sol.numJewelsInStones("aA", "aAAbbbb"));
        System.out.println("Jewels count (z, ZZ): " + sol.numJewelsInStones("z", "ZZ"));
    }
}