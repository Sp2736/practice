/**
 * @file problem-326-2.cpp
 * @brief LeetCode Problem 326: Power of Three (Iterative Division Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.
 * 
 * Algorithm: Repeated Division by 3
 * - Handle non-positive integers (`n <= 0`) early by returning `false`.
 * - Repeatedly divide `n` by `3` as long as `n % 3 == 0`.
 * - Check if the remaining quotient equals `1`.
 * 
 * Time Complexity:  O(log3(N)) - Divides n by 3 until not divisible.
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if n is a power of three by iterative division.
     * @param n Input integer.
     * @return true if n is a power of three, false otherwise.
     */
    bool isPowerOfThree(int n) {

        if (n <= 0)
            return false;

        while (n % 3 == 0)
            n /= 3;

        return n == 1;
    }
};

int main() {
    Solution s;
    int testCases[] = {27, 0, -1, 9, 45};

    for (int n : testCases) {
        cout << "Is " << n << " a power of three? " << (s.isPowerOfThree(n) ? "true" : "false") << endl;
    }

    return 0;
}