/**
 * @file problem-326-opt.cpp
 * @brief LeetCode Problem 326: Power of Three (Max Power Division Trick)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * - Note: This solution is often not preferred in interviews unless math properties are specifically requested.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.
 * 
 * Algorithm: Max 32-bit Signed Integer Power Division
 * - The maximum power of 3 that fits into a standard 32-bit signed integer (`INT_MAX` = 2,147,483,647)
 *   is 3^19 = 1,162,261,467.
 * - Since 3 is a prime number, any power of 3 (e.g., 3^k where k <= 19) will cleanly divide 3^19
 *   with a remainder of 0.
 * - Thus, `1162261467 % n == 0` for any `n > 0` that is a power of 3.
 * 
 * Time Complexity:  O(1) - Single modulo mathematical operation.
 * Space Complexity: O(1) - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

// this solution is not preferred in interviews
class Solution {
public:
    /**
     * @brief Checks if n is a power of three using 3^19 modulo property.
     * @param n Input integer.
     * @return true if n is a power of three, false otherwise.
     */
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
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