/**
 * @file Problem1672.java
 * @brief LeetCode Problem 1672: Richest Customer Wealth (Row-Sum Maximum Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * You are given an `m x n` 2D integer grid `accounts` where `accounts[i][j]` is the amount of money
 * the `i-th` customer has in the `j-th` bank. Return the wealth that the richest customer has.
 * 
 * A customer's wealth is the amount of money they have in all their bank accounts.
 * The richest customer is the customer that has the maximum wealth.
 * 
 * Algorithm: Row-Sum Accumulation & Max Tracking
 * - Initialize `max = 0`.
 * - Iterate through each customer row `i` in `accounts`:
 *   - Sum the account balances across all banks `j` for customer `i`.
 *   - Update `max` if `sum > max`.
 * - Return `max`.
 * 
 * Time Complexity:  O(M * N) - Where M is the number of customers and N is the number of banks.
 * Space Complexity: O(1) - Constant auxiliary memory space.
 */

public class Problem1672 {
    /**
     * Calculates the maximum wealth among all customers.
     * @param accounts 2D array where accounts[i][j] is the money customer i has in bank j.
     * @return Maximum wealth of any customer.
     */
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for (int i = 0; i < accounts.length; i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].length; j++) {
                sum += accounts[i][j];
            }
            if (max <= sum) {
                max = sum;
            }
        }
        return max;
    }

    public static void main(String[] args) {
        Problem1672 solution = new Problem1672();

        int[][] accounts1 = {{1, 2, 3}, {3, 2, 1}};
        System.out.println("Test 1: " + solution.maximumWealth(accounts1)); // Expected: 6

        int[][] accounts2 = {{1, 5}, {7, 3}, {3, 5}};
        System.out.println("Test 2: " + solution.maximumWealth(accounts2)); // Expected: 10

        int[][] accounts3 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
        System.out.println("Test 3: " + solution.maximumWealth(accounts3)); // Expected: 17
    }
}