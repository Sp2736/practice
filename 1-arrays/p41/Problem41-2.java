/**
 * @file Problem41-2.java
 * @brief LeetCode Problem 41: First Missing Positive (Boolean Frequency/Presence Array Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an unsorted integer array `nums`, return the smallest positive integer that is not present in `nums`.
 * 
 * Algorithm: Boolean Presence Array
 * - The first missing positive must lie in the range `[1, nums.length + 1]`.
 * - Allocate a boolean array `present` of size `nums.length + 1`.
 * - Mark `present[x] = true` for every `x` where `0 < x < present.length`.
 * - Scan from index `1` upwards; the first index with `!present[i]` is the answer.
 * - If all indices `1` through `nums.length` are present, return `present.length` (`nums.length + 1`).
 * 
 * Time Complexity:  O(N) - Two sequential linear passes.
 * Space Complexity: O(N) - Auxiliary space for the boolean presence array.
 */

public class Problem41_2 {
    /**
     * Finds the first missing positive integer using a boolean presence array.
     * @param nums Unsorted input integer array.
     * @return Smallest missing positive integer.
     */
    public int firstMissingPositive(int[] nums) {
        boolean[] present = new boolean[nums.length + 1];
        for (int x : nums) {
            if (x > 0 && x < present.length) {
                present[x] = true;
            }
        }
        for (int i = 1; i < present.length; i++) {
            if (!present[i])
                return i;
        }
        return present.length;
    }

    public static void main(String[] args) {
        Problem41_2 sol = new Problem41_2();
        int[] nums = {1, 2, 0};
        System.out.println("First missing positive: " + sol.firstMissingPositive(nums));
    }
}
