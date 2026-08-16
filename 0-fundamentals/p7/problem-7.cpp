/**
 * @file problem-7.cpp
 * @brief LeetCode Problem 7: Reverse Integer (Initial Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a signed 32-bit integer `x`, return `x` with its digits reversed.
 * If reversing `x` causes the value to go outside the signed 32-bit integer range
 * `[-2^31, 2^31 - 1]`, then return `0`.
 * 
 * Algorithm: Flag-based Sign Handling & Digit Extraction
 * - Check for `INT_MIN` upfront to avoid signed integer overflow during negation.
 * - Store the negative state in a boolean `flag` and operate on positive `x`.
 * - Extract digits modulo 10 and accumulate in a 64-bit integer (`long long`).
 * - Apply the sign back and verify whether the final value falls within `[INT_MIN, INT_MAX]`.
 * 
 * Time Complexity:  O(log10(N)) - Loop runs proportional to the number of digits in x.
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
        if (x == INT_MIN) return 0;
        int r = 0;
        long long n = 0;
        bool flag = false;
        if (x < 0) {
            x = -x;
            flag = true;
        }
        while (x > 0) {
            r = x % 10;
            x = x / 10;
            if (n == 0 && r == 0)
                continue;
            n = n * 10 + r;
        }
        if (flag) n = -n;
        if (n < INT_MIN || n > INT_MAX) return 0;
        return n;
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