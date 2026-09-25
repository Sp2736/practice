/**
 * @file Problem189.java
 * @brief LeetCode Problem 189: Rotate Array (Auxiliary Array Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.
 * 
 * Algorithm: Auxiliary Array Copy
 * - Normalize `k = k % n` to handle cases where `k >= n`.
 * - Allocate a temporary array `copy` of size `n`.
 * - Compute the original element position mapped to each target index `i` via `(i + n - k) % n`.
 * - Copy back the rotated elements from `copy` into `nums`.
 * 
 * Time Complexity:  O(N) - Two passes over array of size N.
 * Space Complexity: O(N) - Auxiliary space required for copy array.
 */

public class Problem189 {
    /**
     * Rotates the array to the right by k steps using an auxiliary array.
     * @param nums The array to rotate.
     * @param k The number of steps to rotate.
     */
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k %= n; // to set proper value in case of k>n
        int[] copy = new int[n];
        for (int i = 0; i < n; i++) {
            copy[i] = nums[(i + n - k) % n];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = copy[i];
        }
    }

    public static void main(String[] args) {
        Problem189 solution = new Problem189();

        int[] nums1 = {1, 2, 3, 4, 5, 6, 7};
        int k1 = 3;
        solution.rotate(nums1, k1);
        System.out.println("Test 1: " + java.util.Arrays.toString(nums1)); // Expected: [5,6,7,1,2,3,4]

        int[] nums2 = {-1, -100, 3, 99};
        int k2 = 2;
        solution.rotate(nums2, k2);
        System.out.println("Test 2: " + java.util.Arrays.toString(nums2)); // Expected: [3,99,-1,-100]

        int[] nums3 = {1, 2};
        int k3 = 3;
        solution.rotate(nums3, k3);
        System.out.println("Test 3: " + java.util.Arrays.toString(nums3)); // Expected: [2,1]
    }
}