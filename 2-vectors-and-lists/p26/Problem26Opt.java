import java.util.Arrays;

/**
 * @file Problem26Opt.java
 * @brief LeetCode Problem 26: Remove Duplicates from Sorted Array (Two-Pointer In-Place Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal in-place implementation).
 * 
 * @details
 * Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place
 * such that each unique element appears only once. The relative order of the elements should be kept the same.
 * Then return the number of unique elements in `nums`.
 * 
 * Algorithm: Two-Pointer Fast/Slow Overwrite
 * - Maintain a slow write pointer `k = 1` representing index for the next unique element.
 * - Iterate with fast pointer `i` from index 1 to `nums.length - 1`:
 *   - If `nums[i] != nums[i - 1]`, a new unique element is found.
 *   - Place `nums[k] = nums[i]` and increment `k++`.
 * - Return `k`.
 * 
 * Time Complexity:  O(N) - Single pass through nums array of length N.
 * Space Complexity: O(1) - Constant auxiliary space, fully in-place.
 */

public class Problem26Opt {
    /**
     * Removes duplicates from sorted array nums in-place using two pointers.
     * @param nums Array of integers sorted in non-decreasing order.
     * @return Number of unique elements in nums.
     */
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;
        int k = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }

    public static void main(String[] args) {
        Problem26Opt solution = new Problem26Opt();

        int[] nums1 = {1, 1, 2};
        int k1 = solution.removeDuplicates(nums1);
        System.out.println("k = " + k1 + ", nums = " + Arrays.toString(Arrays.copyOf(nums1, k1)));

        int[] nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        int k2 = solution.removeDuplicates(nums2);
        System.out.println("k = " + k2 + ", nums = " + Arrays.toString(Arrays.copyOf(nums2, k2)));
    }
}