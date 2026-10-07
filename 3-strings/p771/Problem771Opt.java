/**
 * @file Problem771Opt.java
 * @brief LeetCode Problem 771: Jewels and Stones (ASCII Direct-Access Table Lookup Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have.
 * Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.
 * Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.
 * 
 * Algorithm: Fixed-Size ASCII Lookup Table
 * - Use a primitive boolean array of size 128 `boolean[128]` to map ASCII characters.
 * - Set `isJewel[jewels.charAt(i)] = true` for each character in `jewels`.
 * - Scan `stones` and check `isJewel[stones.charAt(i)]` with instant $O(1)$ indexing, avoiding object wrapping / hashing overhead.
 * - Increment the counter when true.
 * 
 * Time Complexity:  O(N + M) - Where N is stones length and M is jewels length.
 * Space Complexity: O(1) - Fixed size array of 128 booleans.
 */

public class Problem771Opt {
    /**
     * Counts how many stones are jewels using a fixed ASCII boolean table.
     * @param jewels String containing jewel character types.
     * @param stones String containing stones in possession.
     * @return Number of stones that are jewels.
     */
    public int numJewelsInStones(String jewels, String stones) {
        boolean[] isJewel = new boolean[128];
        for (int i = 0; i < jewels.length(); i++) {
            isJewel[jewels.charAt(i)] = true;
        }
        int counter = 0;
        for (int i = 0; i < stones.length(); i++) {
            if (isJewel[stones.charAt(i)])
                counter++;
        }
        return counter;
    }

    public static void main(String[] args) {
        Problem771Opt sol = new Problem771Opt();
        System.out.println("Jewels count (aA, aAAbbbb): " + sol.numJewelsInStones("aA", "aAAbbbb"));
        System.out.println("Jewels count (z, ZZ): " + sol.numJewelsInStones("z", "ZZ"));
    }
}