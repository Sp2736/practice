/**
 * @file problem-9-opt.cpp
 * @brief LeetCode Problem 9: Palindrome Number (Optimized Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `x`, return `true` if `x` is a palindrome integer, and `false` otherwise.
 * 
 * Algorithm: Early Exit & Direct Reversal
 * - Instantly returns `false` if `x < 0` (negative numbers cannot be palindromes due to negative sign).
 * - Reverses digits of `x` using a single loop (`reverse = reverse * 10 + x % 10`).
 * - Uses `long long` for `reverse` to prevent potential 32-bit signed integer overflow.
 * - Compares `reverse` against `original`.
 * 
 * Time Complexity:  O(log10(N)) - Single-pass loop proportional to number of digits in x.
 * Space Complexity: O(1)        - Uses constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks whether an integer is a palindrome.
     * @param x Input integer.
     * @return true if x is a palindrome, false otherwise.
     */
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }

        return reverse == original;
    }
};

int main() {
    Solution s;
    int testCases[] = {121, -121, 10, 0, 12321};
    
    for (int x : testCases) {
        cout << "Is " << x << " a palindrome? " << (s.isPalindrome(x) ? "true" : "false") << endl;
    }

    return 0;
}