/**
 * @file problem-50.cpp
 * @brief LeetCode Problem 50: Pow(x, n) (Binary Exponentiation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * Implement `pow(x, n)`, which calculates `x` raised to the power `n` ($x^n$).
 * 
 * Algorithm: Binary Exponentiation (Iterative Repeated Squaring)
 * - Convert `n` to a `long long` variable `power` to safely handle `INT_MIN` overflow when negating.
 * - Handle negative powers by inverting the base `x = 1 / x` and using `power = -power`.
 * - While `power > 0`:
 *   - If `power` is odd (`power % 2 == 1`), multiply `result` by current `x`.
 *   - Square the base `x *= x` and halve the exponent `power /= 2`.
 * 
 * Time Complexity:  O(log N) - Logarithmic time complexity due to halving the power at each iteration.
 * Space Complexity: O(1)     - Auxiliary space used is constant.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Calculates x raised to the power n using iterative binary exponentiation.
     * @param x Double base value.
     * @param n Integer exponent value.
     * @return double Result of x^n.
     */
    double myPow(double x, int n) {
        long long power = n; // to handle the INT_MIN test case
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }
        double result = 1;
        while (power > 0) {
            if (power % 2 == 1)
                result *= x;
            x *= x;
            power /= 2;
        }
        return result;
    }
};

int main() {
    Solution s;
    double x = 2.0;
    int n = 10;
    cout << "pow(" << x << ", " << n << ") = " << s.myPow(x, n) << endl;
    return 0;
}