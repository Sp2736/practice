import java.util.Arrays;

/**
 * @file Problem88.java
 * @brief LeetCode Problem 88: Merge Sorted Array (Auxiliary Array Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`,
 * representing the number of elements in `nums1` and `nums2` respectively.
 * 
 * Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.
 * The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`.
 * To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged,
 * and the last `n` elements are set to 0 and should be ignored. `nums2` has a length of `n`.
 * 
 * Algorithm: Auxiliary Array Merging
 * - Allocate an auxiliary array `nums` of size `m + n`.
 * - Use two pointers `i` and `j` to compare elements from `nums1` and `nums2`, placing the smaller element into `nums[k++]`.
 * - Copy any remaining elements from `nums1` or `nums2` into `nums`.
 * - Copy all elements back from `nums` into `nums1`.
 * 
 * Time Complexity:  O(M + N) - Linear scan across both arrays.
 * Space Complexity: O(M + N) - Extra memory allocated for temporary buffer array.
 */

public class Problem88 {
    /**
     * Merges nums2 into nums1 as one sorted array using an auxiliary array.
     * @param nums1 First sorted array with capacity m + n.
     * @param m Number of initial valid elements in nums1.
     * @param nums2 Second sorted array with n elements.
     * @param n Number of elements in nums2.
     */
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] nums = new int[m + n];
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums[k++] = nums1[i++];
            } else {
                nums[k++] = nums2[j++];
            }
        }
        while (i < m) {
            nums[k++] = nums1[i++];
        }
        while (j < n) {
            nums[k++] = nums2[j++];
        }
        for (int p = 0; p < m + n; p++) {
            nums1[p] = nums[p];
        }
    }

    public static void main(String[] args) {
        Problem88 sol = new Problem88();

        int[] nums1 = {1, 2, 3, 0, 0, 0};
        int m = 3;
        int[] nums2 = {2, 5, 6};
        int n = 3;
        sol.merge(nums1, m, nums2, n);
        System.out.println("Merged Array: " + Arrays.toString(nums1));

        int[] nums3 = {1};
        sol.merge(nums3, 1, new int[]{}, 0);
        System.out.println("Merged Array: " + Arrays.toString(nums3));

        int[] nums4 = {0};
        sol.merge(nums4, 0, new int[]{1}, 1);
        System.out.println("Merged Array: " + Arrays.toString(nums4));
    }
}
