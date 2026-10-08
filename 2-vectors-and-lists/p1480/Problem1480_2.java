import java.util.Arrays;

/**
 * @file Problem1480_2.java
 * @brief LeetCode Problem 1480: Running Sum of 1d Array (In-Place Prefix Sum Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (in-place optimal implementation).
 * 
 * @details
 * Given an array `nums`, we define a running sum of an array as `runningSum[i] = sum(nums[0]...nums[i])`.
 * Return the running sum of `nums`.
 * 
 * Algorithm: In-Place Prefix Sum Overwrite
 * - Directly accumulate the prefix sum within the input array `nums`.
 * - For each index `i` from 1 to `nums.length - 1`:
 *   `nums[i] += nums[i - 1]`
 * - Returns the modified `nums` array without allocating any extra array.
 * 
 * Time Complexity:  O(N) - Single pass through the input array of length N.
 * Space Complexity: O(1) - In-place modification using constant auxiliary space.
 */

public class Problem1480_2 {
    /**
     * Calculates the running sum in-place without allocating auxiliary array memory.
     * @param nums Input array of integers (modified in-place).
     * @return Reference to the input array containing running sums.
     */
    public int[] runningSum(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }

    public static void main(String[] args) {
        Problem1480_2 solution = new Problem1480_2();

        int[] nums1 = {1, 2, 3, 4};
        System.out.println("Input: [1, 2, 3, 4] -> Running Sum: " + Arrays.toString(solution.runningSum(nums1)));

        int[] nums2 = {1, 1, 1, 1, 1};
        System.out.println("Input: [1, 1, 1, 1, 1] -> Running Sum: " + Arrays.toString(solution.runningSum(nums2)));

        int[] nums3 = {3, 1, 2, 10, 1};
        System.out.println("Input: [3, 1, 2, 10, 1] -> Running Sum: " + Arrays.toString(solution.runningSum(nums3)));
    }
}
