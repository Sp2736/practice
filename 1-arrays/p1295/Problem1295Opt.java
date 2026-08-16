/**
 * @file Problem1295Opt.java
 * @brief LeetCode Problem 1295: Find Numbers with Even Number of Digits (Logarithmic Digit Computation)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an array `nums` of integers, return how many of them contain an even number of digits.
 * 
 * Algorithm: Logarithmic Math Optimization
 * - Digit count of any positive integer `x` can be directly calculated using `(int) Math.log10(x) + 1`.
 * - Avoids the `while` loop division, computing digits in constant $O(1)$ time per element.
 * 
 * Time Complexity:  O(N) - Single pass through nums array with O(1) math operation per element.
 * Space Complexity: O(1) - Auxiliary space used is constant.
 */

public class Problem1295Opt {
    /**
     * Counts numbers with an even number of digits using Math.log10.
     * @param nums Array of integers.
     * @return Count of numbers with even digits.
     */
    public int findNumbers(int[] nums) {
        int count = 0;

        for (int x : nums) {
            int digits = (int) Math.log10(x) + 1;

            if (digits % 2 == 0)
                count++;
        }

        return count;
    }

    public static void main(String[] args) {
        Problem1295Opt s = new Problem1295Opt();
        int[] nums = {12, 345, 2, 6, 7896};
        System.out.println("Result: " + s.findNumbers(nums));
    }
}