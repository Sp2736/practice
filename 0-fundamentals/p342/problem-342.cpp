/**
 * @file problem-342.cpp
 * @brief LeetCode Problem 342: Power of Four (Bit Manipulation & Math Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n` (referred to as `x` in the parameters), return `true` if it is a power of four.
 * Otherwise, return `false`.
 * 
 * Algorithm: Bitwise Check & Remainder Logic
 * - Check if the number is positive (`x > 0`).
 * - A power of four must first be a power of two. We verify this via bitwise AND: `(x & (x - 1)) == 0`.
 * - For a power of two $2^k$ to be a power of four, $k$ must be even ($4^m = 2^{2m}$).
 * - Mathematically, $4^m - 1$ is always divisible by 3 (since $(3+1)^m - 1 \equiv 0 \pmod 3$).
 * - Thus, we check if `(x - 1) % 3 == 0` to confirm it is a power of four.
 * 
 * Time Complexity:  O(1) - Only bitwise operations and a modulo operation are used.
 * Space Complexity: O(1) - Constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Determines if the given integer is a power of four.
     * @param x Input integer.
     * @return true if x is a power of four, false otherwise.
     */
    bool isPowerOfFour(int x) {
        if ((x > 0) && ((x & (x - 1)) == 0) && ((x - 1) % 3 == 0)) return true;
        else return false;
    }
};

int main() {
    Solution s;
    int testCases[] = {16, 5, 1, 0, -64, 64};
    
    for (int x : testCases) {
        cout << "isPowerOfFour(" << x << ") = " << (s.isPowerOfFour(x) ? "true" : "false") << endl;
    }
    
    return 0;
}