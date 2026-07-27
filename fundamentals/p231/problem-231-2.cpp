/**
 * @file problem-231-2.cpp
 * @brief LeetCode Problem 231: Power of Two (Iterative Division Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.
 * 
 * Algorithm: Repeated Division by 2
 * - Handle non-positive integers (`n <= 0`) early by returning `false`.
 * - Repeatedly divide `n` by `2` as long as `n % 2 == 0`.
 * - Check if the remaining quotient equals `1`.
 * 
 * Time Complexity:  O(log2(N)) - Divides n by 2 until odd.
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if n is a power of two by iterative division.
     * @param n Input integer.
     * @return true if n is a power of two, false otherwise.
     */
    bool isPowerOfTwo(int n) {

        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n /= 2;

        return n == 1;
    }
};

int main() {
    Solution s;
    int testCases[] = {1, 16, 3, 4, 0, -16};

    for (int n : testCases) {
        cout << "Is " << n << " a power of two? " << (s.isPowerOfTwo(n) ? "true" : "false") << endl;
    }

    return 0;
}