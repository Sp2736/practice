/**
 * @file Problem189Opt.java
 * @brief LeetCode Problem 189: Rotate Array (In-Place Three-Reversal Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.
 * Must rotate the array in-place with O(1) extra space.
 * 
 * Algorithm: Three-Step Array Reversal
 * - Normalize `k = k % n`.
 * - Step 1: Reverse the entire array `[0, n - 1]` -> elements end up in reverse order.
 * - Step 2: Reverse the first `k` elements `[0, k - 1]` -> restores order of the rotated prefix.
 * - Step 3: Reverse the remaining `n - k` elements `[k, n - 1]` -> restores order of the remaining suffix.
 * 
 * Time Complexity:  O(N) - Elements are reversed in linear time (total elements touched is 2N).
 * Space Complexity: O(1) - In-place transformation with constant auxiliary space.
 */

public class Problem189Opt {
    /**
     * Rotates the array to the right by k steps in-place using three reversals.
     * @param nums The array to rotate.
     * @param k The number of steps to rotate.
     */
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k %= n;
        reverse(nums, 0, n - 1); // [7,6,5,4,3,2,1]
        reverse(nums, 0, k - 1); // [5,6,7,4,3,2,1]
        reverse(nums, k, n - 1); // [5,6,7,1,2,3,4]
    }

    /**
     * Helper method to reverse a subarray in-place between two pointers.
     * @param nums Array to reverse within.
     * @param left Starting index.
     * @param right Ending index.
     */
    private void reverse(int[] nums, int left, int right) {
        while (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }

    public static void main(String[] args) {
        Problem189Opt solution = new Problem189Opt();

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
