/**
 * @file problem-258-opt.cpp
 * @brief LeetCode Problem 258: Add Digits (Digital Root / Mathematical Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.
 * 
 * Algorithm: Digital Root / Congruence Formula
 * - The digital root (repeated sum of digits) of a non-negative integer in base 10 is equivalent to the modulo 9 value.
 * - Specifically:
 *   - If `num == 0`, result is `0`.
 *   - Otherwise, `num % 9`. If `num % 9 == 0`, the digital root is `9`.
 *   - This can be expressed in a single formula: `1 + (num - 1) % 9`.
 * 
 * Time Complexity:  O(1) - Evaluates a single arithmetic expression.
 * Space Complexity: O(1) - Constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes the digital root of an integer in O(1) time.
     * @param num Input integer.
     * @return int The single-digit result.
     */
    int addDigits(int num) {
        if (num == 0)
            return 0;

        return 1 + (num - 1) % 9;
    }
};

int main() {
    Solution s;
    int testCases[] = {38, 0, 12345};
    
    for (int num : testCases) {
        cout << "addDigits(" << num << ") = " << s.addDigits(num) << endl;
    }
    
    return 0;
}