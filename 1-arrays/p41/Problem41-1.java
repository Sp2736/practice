import java.util.Arrays;

/**
 * @file Problem41-1.java
 * @brief LeetCode Problem 41: First Missing Positive (Sorting Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an unsorted integer array `nums`, return the smallest positive integer that is not present in `nums`.
 * 
 * Algorithm: Sorting & Incremental Match
 * - Sort the array in ascending order.
 * - Maintain `min = 1` representing the expected smallest missing positive integer.
 * - Iterate through the sorted elements. Whenever `n == min`, increment `min++`.
 * - Return `(int) min`.
 * 
 * Time Complexity:  O(N log N) - Sorting the array dominates execution time.
 * Space Complexity: O(1) or O(N) - Depending on the internal sorting algorithm implementation.
 */

public class Problem41_1 {
    /**
     * Finds the first missing positive integer using sorting.
     * @param nums Unsorted input integer array.
     * @return Smallest missing positive integer.
     */
    public int firstMissingPositive(int[] nums) {
        long min = 1;
        Arrays.sort(nums);
        for(int n : nums) {
            if(n == min) min++;
        }
        return (int)min;
    }

    public static void main(String[] args) {
        Problem41_1 sol = new Problem41_1();
        int[] nums = {1, 2, 0};
        System.out.println("First missing positive: " + sol.firstMissingPositive(nums));
    }
}