/**
 * @file Problem29.java
 * @brief LeetCode Problem 29: Divide Two Integers (Bit Manipulation / Exponential Doubling Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal exponential doubling implementation).
 * 
 * @details
 * Given two integers `dividend` and `divisor`, divide two integers without using multiplication, division, and mod operator.
 * The integer division should truncate toward zero.
 * Assume 32-bit signed integer range `[−2^31, 2^31 − 1]`. If the quotient is strictly greater than `2^31 - 1`, return `2^31 - 1`.
 * If the quotient is strictly less than `-2^31`, return `-2^31`.
 * 
 * Algorithm: Exponential Doubling (Bit Shift / Repeated Addition)
 * - Conceptual Base (see commented code below): Linear subtraction (`dividend - divisor`) with sign tracking.
 * - Optimized Approach: Exponential doubling (`current += current`, `multiple += multiple`) to achieve logarithmic steps.
 * - Handle overflow edge case: `dividend == Integer.MIN_VALUE && divisor == -1` -> `Integer.MAX_VALUE`.
 * - Convert `dividend` and `divisor` to positive `long` values to avoid integer overflow issues during negation.
 * - Subtract exponentially doubled chunks of `divisor` from `dividend` until remainder is less than `divisor`.
 * - Apply sign using XOR: `(dividend < 0) ^ (divisor < 0)`.
 * 
 * Time Complexity:  O(log^2 N) or O(32) - Outer loop reduces `a` by at least half in each full round.
 * Space Complexity: O(1) - Constant auxiliary space.
 */

/**
 * The foundational way to intuitively think about this problem (Linear Subtraction):
 * 
 * class Solution {
 *     public int divide(int dividend, int divisor) {
 *         long count = 0;
 *         long originalDividend = dividend;
 *         long originalDivisor = divisor;
 *         boolean isNegative = false;
 *         if (divisor < 0 && dividend < 0) {
 *             divisor = (int) -((long) divisor);
 *             dividend = (int) -((long) dividend);
 *         }
 *         else if (divisor < 0) {
 *             isNegative = true;
 *             divisor = (int) -((long) divisor);
 *         }
 *         else if (dividend < 0) {
 *             isNegative = true;
 *             dividend = (int) -((long) dividend);
 *         }
 *         long d = Math.abs(originalDividend);
 *         long v = Math.abs(originalDivisor);
 *         while (d - v >= 0) {
 *             d -= v;
 *             count++;
 *         }
 *         if (isNegative)
 *             count = -count;
 *         if (count > Integer.MAX_VALUE)
 *             return Integer.MAX_VALUE;
 *         return (int) count;
 *     }
 * }
 */

public class Problem29 {
    /**
     * Divides dividend by divisor without using multiplication, division, or mod operators.
     * @param dividend The integer dividend.
     * @param divisor The integer divisor.
     * @return Truncated integer quotient.
     */
    public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1)
            return Integer.MAX_VALUE;
        long a = Math.abs((long) dividend);
        long b = Math.abs((long) divisor);
        int result = 0;
        while (a >= b) {
            long current = b;
            int multiple = 1;
            while (a >= current + current) {
                current += current;
                multiple += multiple;
            }
            a -= current;
            result += multiple;
        }
        if ((dividend < 0) ^ (divisor < 0))
            result = -result;
        return result;
    }

    public static void main(String[] args) {
        Problem29 sol = new Problem29();
        int dividend = 10, divisor = 3;
        System.out.println("Result: " + sol.divide(dividend, divisor));

        int dividend2 = 7, divisor2 = -3;
        System.out.println("Result: " + sol.divide(dividend2, divisor2));
    }
}