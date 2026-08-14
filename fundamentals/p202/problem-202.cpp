/**
 * @file problem-202.cpp
 * @brief LeetCode Problem 202: Happy Number (Unordered Set Hash Table Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write an algorithm to determine if a number `n` is happy.
 * A happy number is defined by replacing the number by the sum of the squares of its digits,
 * repeating until the number equals 1 (or loops endlessly in a cycle which does not include 1).
 * 
 * Algorithm: Hash Set Cycle Detection
 * - Calculate sum of squared digits iteratively via `getSquareSum(n)`.
 * - Use `std::unordered_set<int>` to store visited numbers.
 * - If `n` repeats (exists in `seen`), a cycle is detected, so return `false`.
 * - If `n` reaches 1, return `true`.
 * 
 * Time Complexity:  O(log N) - Small finite steps before reaching 1 or entering cycle.
 * Space Complexity: O(log N) - Requires hash set to store seen numbers.
 */

#include <iostream>
#include <unordered_set>
using namespace std;

// involves use of unordered set
class Solution {
public:
    /**
     * @brief Computes sum of squares of digits of n.
     * @param n Input integer.
     * @return int Sum of squared digits.
     */
    int getSquareSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    /**
     * @brief Determines if n is a happy number using unordered_set cycle detection.
     * @param n Input integer.
     * @return true if happy, false otherwise.
     */
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1) {
            if (seen.count(n))
                return false;
            seen.insert(n);
            n = getSquareSum(n);
        }
        return true;
    }
};

int main() {
    Solution s;
    int n = 19;
    cout << "isHappy(" << n << "): " << (s.isHappy(n) ? "true" : "false") << endl;
    return 0;
}