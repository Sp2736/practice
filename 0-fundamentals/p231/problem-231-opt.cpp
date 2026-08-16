/**
 * @file problem-231-opt.cpp
 * @brief LeetCode Problem 231: Power of Two (Bit Manipulation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.
 * 
 * Algorithm: Bitwise AND Trick `(n & (n - 1)) == 0`
 * - Any positive power of two in binary format contains EXACTLY ONE set bit (`1`).
 *   - Example: 1 (00001_2), 2 (00010_2), 4 (00100_2), 8 (01000_2), 16 (10000_2).
 * - Subtracting 1 from a power of two flips that single set bit to 0 and turns all subsequent trailing zeros to 1s.
 *   - Example: 8 (1000_2) -> 8 - 1 = 7 (0111_2).
 * - Taking the bitwise AND `(n & (n - 1))` results in `0` if and only if `n` had exactly one set bit.
 * - Check `n > 0` to filter out `0` and negative numbers.
 * 
 * Time Complexity:  O(1) - Executed in a single constant-time bitwise instruction.
 * Space Complexity: O(1) - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if n is a power of two using O(1) bit manipulation trick.
     * @param n Input integer.
     * @return true if n is a power of two, false otherwise.
     */
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
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