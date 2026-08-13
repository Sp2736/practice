/**
 * @file problem-69-1.cpp
 * @brief LeetCode Problem 69: Sqrt(x) (Newton-Raphson / Babylonian Method)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (studied Babylonian method).
 * 
 * @details
 * Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer.
 * The returned integer should be non-negative as well.
 * 
 * Algorithm: Newton-Raphson Iterative Method
 * - Uses the recurrence relation: `next_guess = (guess + x / guess) / 2`.
 * - Starts with initial `guess = x`.
 * - Iteratively refines `guess` while `guess > x / guess`.
 * - Converges extremely fast (quadratically) to the integer square root.
 * 
 * Time Complexity:  O(log N) - Quadratic convergence of Newton's method.
 * Space Complexity: O(1)     - Auxiliary space used is constant.
 */

#include <iostream>
using namespace std;

// searched online and found Newton's Babylonian method of square roots
//     int guess = x; while(round(guess*guess) != x) {
//     int new_guess = (guess + x / guess) / 2;
//     guess = new_guess;
//     }
//     return guess;
class Solution {
public:
    /**
     * @brief Computes floor(sqrt(x)) using Newton's method.
     * @param x Non-negative integer.
     * @return int Floor of square root of x.
     */
    int mySqrt(int x) {
        if (x == 0)
            return 0;
        long long guess = x;
        while (guess > x / guess) {
            guess = (guess + x / guess) / 2;
        }
        return guess;
    }
};

int main() {
    Solution s;
    int x = 8;
    cout << "sqrt(" << x << ") = " << s.mySqrt(x) << endl;
    return 0;
}