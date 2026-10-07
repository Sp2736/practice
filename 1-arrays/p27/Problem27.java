import java.util.Arrays;

/**
 * @file Problem27.java
 * @brief LeetCode Problem 27: Remove Element (Two-Pointer Overwrite Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal in-place overwrite).
 * 
 * @details
 * Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place.
 * The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.
 * 
 * Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:
 * - Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`.
 * - The remaining elements of `nums` are not important as well as the size of `nums`.
 * - Return `k`.
 * 
 * Algorithm: Two-Pointer Overwrite
 * - Maintain a slow write pointer `k = 0`.
 * - Iterate through each element `n` in `nums`:
 *   - If `n != val`, assign `nums[k] = n` and increment `k++`.
 * - Return `k` as the new length of valid elements.
 * 
 * Time Complexity:  O(N) - Single pass through the array of length N.
 * Space Complexity: O(1) - In-place modification with constant auxiliary space.
 */

public class Problem27 {
    /**
     * Removes all instances of val from nums in-place.
     * @param nums Integer array.
     * @param val Target value to remove.
     * @return Number of elements in nums not equal to val.
     */
    public int removeElement(int[] nums, int val) {
        int k = 0;
        for (int n : nums) {
            if (n != val) {
                nums[k] = n;
                k++;
            }
        }
        return k;
    }

    public static void main(String[] args) {
        Problem27 sol = new Problem27();
        
        int[] nums1 = {3, 2, 2, 3};
        int val1 = 3;
        int k1 = sol.removeElement(nums1, val1);
        System.out.println("k = " + k1 + ", nums = " + Arrays.toString(Arrays.copyOf(nums1, k1)));

        int[] nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
        int val2 = 2;
        int k2 = sol.removeElement(nums2, val2);
        System.out.println("k = " + k2 + ", nums = " + Arrays.toString(Arrays.copyOf(nums2, k2)));
    }
}