import java.util.Arrays;

/**
 * @file Problem645.java
 * @brief LeetCode Problem 645: Set Mismatch (Sorting Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You have a set of integers from `1` to `n` where one number was duplicated and one number was lost.
 * Given an integer array `nums` representing the data status of this set after the error,
 * find and return the number that occurs twice and the number that is missing in the form of an array `[duplicate, missing]`.
 * 
 * Algorithm: Sorting & Linear Scan
 * - Sort the array `nums` in ascending order.
 * - Initialize `duplicate = 0` and `missing = 1`.
 * - Scan through the sorted array:
 *   - If `nums[i] == nums[i - 1]`, mark `duplicate = nums[i]`.
 *   - If `nums[i] == missing`, increment `missing++`.
 * - Return `new int[] { duplicate, missing }`.
 * 
 * Time Complexity:  O(N log N) - Dominated by array sorting.
 * Space Complexity: O(1) or O(N) - Depending on internal sorting implementation.
 */

public class Problem645 {
    /**
     * Finds the duplicate and missing numbers using sorting.
     * @param nums Array containing n integers from 1 to n with one duplicate and one missing.
     * @return Array of two integers [duplicate, missing].
     */
    public int[] findErrorNums(int[] nums) {
        Arrays.sort(nums);
        int duplicate = 0;
        int missing = 1;
        for (int i = 0; i < nums.length; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                duplicate = nums[i];
            if (nums[i] == missing)
                missing++;
        }
        return new int[] { duplicate, missing };
    }

    public static void main(String[] args) {
        Problem645 sol = new Problem645();
        int[] nums = { 1, 2, 2, 4 };
        int[] result = sol.findErrorNums(nums);
        System.out.println("Duplicate: " + result[0] + ", Missing: " + result[1]);
    }
}
