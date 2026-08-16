/**
 * @file problem-69-2.cpp
 * @brief LeetCode Problem 69: Sqrt(x) (Binary Search Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer.
 * 
 * Algorithm: Binary Search on Answer Space
 * - Search range: `[1, x / 2]` for `x >= 2`.
 * - Calculate `mid = low + (high - low) / 2`.
 * - If `mid * mid == x`, return `mid`.
 * - If `mid * mid < x`, store `mid` as candidate `answer` and move right (`low = mid + 1`).
 * - If `mid * mid > x`, move left (`high = mid - 1`).
 * 
 * Time Complexity:  O(log N) - Binary search reduces search space by half each step.
 * Space Complexity: O(1)     - Auxiliary space used is constant.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes floor(sqrt(x)) using Binary Search.
     * @param x Non-negative integer.
     * @return int Floor of square root of x.
     */
    int mySqrt(int x) {
        if (x < 2)
            return x;

        long long low = 1;
        long long high = x / 2;
        int answer = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid < x) {
                answer = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return answer;
    }
};

int main() {
    Solution s;
    int x = 8;
    cout << "sqrt(" << x << ") = " << s.mySqrt(x) << endl;
    return 0;
}