import java.util.Arrays;

/**
 * @file Problem88Opt.java
 * @brief LeetCode Problem 88: Merge Sorted Array (Three-Pointer Backward In-Place Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`,
 * representing the number of elements in `nums1` and `nums2` respectively.
 * 
 * Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.
 * The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`.
 * 
 * Algorithm: Backward Three-Pointer In-Place Placement
 * - Initialize `i = m - 1` (last element of nums1), `j = n - 1` (last element of nums2), and `k = m + n - 1` (last available slot in nums1).
 * - Fill `nums1` from the back:
 *   - While `j >= 0`:
 *     - If `i >= 0 && nums1[i] > nums2[j]`, place `nums1[i--]` into `nums1[k--]`.
 *     - Otherwise, place `nums2[j--]` into `nums1[k--]`.
 * - If `nums1` elements remain (`i >= 0`), they are already in their correct sorted positions.
 * - Achieves zero extra auxiliary space and avoids overwriting unread elements in `nums1`.
 * 
 * Time Complexity:  O(M + N) - Single pass through both arrays from right to left.
 * Space Complexity: O(1) - Constant auxiliary memory; modifications done in-place.
 */

public class Problem88Opt {
    /**
     * Merges nums2 into nums1 in-place by filling from the back.
     * @param nums1 First sorted array with capacity m + n.
     * @param m Number of initial valid elements in nums1.
     * @param nums2 Second sorted array with n elements.
     * @param n Number of elements in nums2.
     */
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }

    public static void main(String[] args) {
        Problem88Opt sol = new Problem88Opt();

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