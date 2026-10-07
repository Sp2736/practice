import java.util.HashSet;
import java.util.Set;

/**
 * @file Problem771_2.java
 * @brief LeetCode Problem 771: Jewels and Stones (HashSet Lookup Approach)
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
 * Algorithm: HashSet Lookup
 * - Populate a `HashSet<Character>` with all distinct characters from `jewels`.
 * - Iterate through each character in `stones` and check membership in the HashSet in O(1) average time.
 * - Increment the counter when a stone character is present in the set.
 * 
 * Time Complexity:  O(N + M) - Where N is stones length and M is jewels length.
 * Space Complexity: O(M) - Auxiliary storage for the HashSet storing unique jewel characters.
 */

public class Problem771_2 {
    /**
     * Counts how many stones are jewels using a HashSet.
     * @param jewels String containing jewel character types.
     * @param stones String containing stones in possession.
     * @return Number of stones that are jewels.
     */
    public int numJewelsInStones(String jewels, String stones) {
        Set<Character> set = new HashSet<>();
        int counter = 0;
        for (int i = 0; i < jewels.length(); i++) {
            set.add(jewels.charAt(i));
        }
        for (int i = 0; i < stones.length(); i++) {
            if (set.contains(stones.charAt(i)))
                counter++;
        }
        return counter;
    }

    public static void main(String[] args) {
        Problem771_2 sol = new Problem771_2();
        System.out.println("Jewels count (aA, aAAbbbb): " + sol.numJewelsInStones("aA", "aAAbbbb"));
        System.out.println("Jewels count (z, ZZ): " + sol.numJewelsInStones("z", "ZZ"));
    }
}