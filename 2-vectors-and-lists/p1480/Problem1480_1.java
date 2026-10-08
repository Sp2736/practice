import java.util.Arrays;

/**
 * @file Problem1480_1.java
 * @brief LeetCode Problem 1480: Running Sum of 1d Array (Prefix Sum with Auxiliary Array)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an array `nums`, we define a running sum of an array as `runningSum[i] = sum(nums[0]...nums[i])`.
 * Return the running sum of `nums`.
 * 
 * Algorithm: Prefix Sum with Auxiliary Array
 * - Allocate an output array `sums` of the same length as `nums`.
 * - Initialize `sums[0] = nums[0]`.
 * - Iterate from index 1 to `nums.length - 1`, computing `sums[i] = sums[i - 1] + nums[i]`.
 * - Return the accumulated `sums` array.
 * 
 * Time Complexity:  O(N) - Single pass through the input array of length N.
 * Space Complexity: O(N) - Auxiliary space allocated for the output array (O(1) extra auxiliary excluding output).
 */

public class Problem1480_1 {
    /**
     * Calculates the running sum of a 1D array.
     * @param nums Input array of integers.
     * @return Array containing running sums.
     */
    public int[] runningSum(int[] nums) {
        int[] sums = new int[nums.length];
        sums[0] = nums[0];
        for (int i = 1; i < nums.length; i++) {
            sums[i] = sums[i - 1] + nums[i];
        }
        return sums;
    }

    public static void main(String[] args) {
        Problem1480_1 solution = new Problem1480_1();

        int[] nums1 = {1, 2, 3, 4};
        System.out.println("Input: " + Arrays.toString(nums1) + " -> Running Sum: " + Arrays.toString(solution.runningSum(nums1)));

        int[] nums2 = {1, 1, 1, 1, 1};
        System.out.println("Input: " + Arrays.toString(nums2) + " -> Running Sum: " + Arrays.toString(solution.runningSum(nums2)));

        int[] nums3 = {3, 1, 2, 10, 1};
        System.out.println("Input: " + Arrays.toString(nums3) + " -> Running Sum: " + Arrays.toString(solution.runningSum(nums3)));
    }
}
