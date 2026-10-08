import java.util.Arrays;
import java.util.Set;
import java.util.TreeSet;

/**
 * @file Problem26.java
 * @brief LeetCode Problem 26: Remove Duplicates from Sorted Array (TreeSet Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place
 * such that each unique element appears only once. The relative order of the elements should be kept the same.
 * Then return the number of unique elements in `nums`.
 * 
 * Algorithm: Ordered Set Extraction
 * - Insert all elements of `nums` into a `TreeSet<Integer>` to extract unique values in sorted order.
 * - Iterate over the `TreeSet` and overwrite the first elements of `nums`.
 * - Return `unique.size()`.
 * 
 * Time Complexity:  O(N * log(U)) - Where N is array length and U is the number of unique elements (TreeSet insertions).
 * Space Complexity: O(U) - Auxiliary space required to store unique elements in the TreeSet.
 */

public class Problem26 {
    /**
     * Removes duplicates from sorted array nums using a TreeSet.
     * @param nums Array of integers sorted in non-decreasing order.
     * @return Number of unique elements in nums.
     */
    public int removeDuplicates(int[] nums) {
        Set<Integer> unique = new TreeSet<>();
        for (int n : nums)
            unique.add(n);
        int i = 0;
        for (int n : unique)
            nums[i++] = n;
        return unique.size();
    }

    public static void main(String[] args) {
        Problem26 solution = new Problem26();

        int[] nums1 = {1, 1, 2};
        int k1 = solution.removeDuplicates(nums1);
        System.out.println("k = " + k1 + ", nums = " + Arrays.toString(Arrays.copyOf(nums1, k1)));

        int[] nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        int k2 = solution.removeDuplicates(nums2);
        System.out.println("k = " + k2 + ", nums = " + Arrays.toString(Arrays.copyOf(nums2, k2)));
    }
}