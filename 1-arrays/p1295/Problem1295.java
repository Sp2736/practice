/**
 * @file Problem1295.java
 * @brief LeetCode Problem 1295: Find Numbers with Even Number of Digits (Iterative Division Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an array `nums` of integers, return how many of them contain an even number of digits.
 * 
 * Algorithm: Iterative Digit Counting
 * - For each number `x` in `nums`, count its digits by repeatedly dividing by 10 (`countDigits`).
 * - Increment total `count` if `digits % 2 == 0`.
 * 
 * Time Complexity:  O(N * log10(M)) - Where N is the number of elements and M is the maximum value.
 * Space Complexity: O(1) - Auxiliary space used is constant.
 */

public class Problem1295 {
    /**
     * Helper method to count the number of digits in an integer n.
     * @param n Input integer.
     * @return Number of digits in n.
     */
    public static int countDigits(int n) {
        int digits = 0;
        while(n > 0) {
            digits++;
            n /= 10;
        }
        return digits;
    }

    /**
     * Counts numbers with an even number of digits.
     * @param nums Array of integers.
     * @return Count of numbers with even digits.
     */
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int x : nums) {
            if(countDigits(x) % 2 == 0) count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Problem1295 s = new Problem1295();
        int[] nums = {12, 345, 2, 6, 7896};
        System.out.println("Result: " + s.findNumbers(nums));
    }
}