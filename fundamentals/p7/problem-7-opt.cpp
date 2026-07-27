/**
 * @file problem-7-opt.cpp
 * @brief LeetCode Problem 7: Reverse Integer (Optimized Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given a signed 32-bit integer `x`, return `x` with its digits reversed.
 * If reversing `x` causes the value to go outside the signed 32-bit integer range
 * `[-2^31, 2^31 - 1]`, then return `0`.
 * 
 * Algorithm: Clean Reversal & Range Check
 * - Check `INT_MIN` immediately to avoid overflow during sign negation.
 * - Track sign via `negative` boolean and convert `x` to positive.
 * - Accumulate reversed digits directly using `reverse = reverse * 10 + x % 10`.
 * - Restore sign and return `0` if reversed integer exceeds `[INT_MIN, INT_MAX]`.
 * 
 * Time Complexity:  O(log10(N)) - Single-pass digit extraction loop.
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    /**
     * @brief Reverses digits of a 32-bit signed integer.
     * @param x Input integer.
     * @return int Reversed integer, or 0 if overflow occurs.
     */
    int reverse(int x) {

        if (x == INT_MIN)
            return 0;

        bool negative = x < 0;

        if (negative)
            x = -x;

        long long reverse = 0;

        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }

        if (negative)
            reverse = -reverse;

        if (reverse < INT_MIN || reverse > INT_MAX)
            return 0;

        return (int)reverse;
    }
};

int main() {
    Solution s;
    int testCases[] = {123, -123, 120, 0, 1534236469};
    
    for (int x : testCases) {
        cout << "Reverse of " << x << " is: " << s.reverse(x) << endl;
    }

    return 0;
}