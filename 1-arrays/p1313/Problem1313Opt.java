import java.util.Arrays;

/**
 * @file Problem1313Opt.java
 * @brief LeetCode Problem 1313: Decompress Run-Length Encoded List (Arrays.fill Block Filling Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * We are given a list `nums` of integers representing a list compressed with run-length encoding.
 * 
 * Algorithm: Optimized Range Filling via `Arrays.fill`
 * - Pass 1: Sum up `freq` values to pre-calculate `arrSize`.
 * - Pass 2: Use `Arrays.fill(result, startIdx, startIdx + nums[i], nums[i + 1])` to perform bulk memory block filling.
 * - Leverages underlying Java native range filling routines instead of manual inner loop iteration.
 * 
 * Time Complexity:  O(N + K) - Where N is nums.length and K is total decompressed length.
 * Space Complexity: O(K) - Auxiliary space required for output array.
 */

public class Problem1313Opt {
    /**
     * Decompresses run-length encoded array using Arrays.fill range insertion.
     * @param nums Encoded array containing pairs of [freq, val].
     * @return Decompressed array.
     */
    public int[] decompressRLElist(int[] nums) {
        int arrSize = 0;
        for (int i = 0; i < nums.length; i += 2) {
            arrSize += nums[i];
        }
        int[] result = new int[arrSize];
        int startIdx = 0;
        for (int i = 0; i < nums.length; i += 2) {
            Arrays.fill(result, startIdx, startIdx + nums[i], nums[i + 1]);
            startIdx += nums[i];
        }
        return result;
    }

    public static void main(String[] args) {
        Problem1313Opt s = new Problem1313Opt();
        int[] nums = {1, 2, 3, 4};
        int[] result = s.decompressRLElist(nums);
        System.out.println("Decompressed List: " + Arrays.toString(result));
    }
}