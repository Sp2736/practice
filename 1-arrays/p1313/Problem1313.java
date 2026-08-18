import java.util.Arrays;

/**
 * @file Problem1313.java
 * @brief LeetCode Problem 1313: Decompress Run-Length Encoded List (Nested Loop Filling Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * We are given a list `nums` of integers representing a list compressed with run-length encoding.
 * For each pair `[freq, val] = [nums[2*i], nums[2*i+1]]`, concatenate `freq` elements with value `val`.
 * Return the decompressed list.
 * 
 * Algorithm: Two-Pass Size Pre-calculation & Nested Loop Filling
 * - Pass 1: Sum up all `freq` elements (`nums[0], nums[2], ...`) to compute total array `size`.
 * - Pass 2: Allocate `result[size]` and use nested loops to fill `nums[i + 1]` `nums[i]` times sequentially.
 * 
 * Time Complexity:  O(N + K) - Where N is nums.length and K is total decompressed length (sum of frequencies).
 * Space Complexity: O(K) - Auxiliary space required for output array.
 */

public class Problem1313 {
    /**
     * Decompresses run-length encoded array into target array.
     * @param nums Encoded array containing pairs of [freq, val].
     * @return Decompressed array.
     */
    public int[] decompressRLElist(int[] nums) {
        int size = 0;
        for (int i = 0; i < nums.length; i += 2) {
            size += nums[i];
        }
        int[] result = new int[size];
        int p = 0;
        for (int i = 0; i < nums.length; i += 2) {
            for (int j = 0; j < nums[i]; j++) {
                result[p++] = nums[i + 1]; // filling the numbers in its specified pattern
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Problem1313 s = new Problem1313();
        int[] nums = {1, 2, 3, 4};
        int[] result = s.decompressRLElist(nums);
        System.out.println("Decompressed List: " + Arrays.toString(result));
    }
}