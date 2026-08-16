/**
 * @file problem-326-1.cpp
 * @brief LeetCode Problem 326: Power of Three (Initial Power Search Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.
 * 
 * Algorithm: Exponent Search via pow()
 * - Return `false` immediately for non-positive inputs (`n <= 0`).
 * - Increment exponent `i` starting from 0 while `pow(3, i) <= n`.
 * - If `pow(3, i) == n` at any step, return `true`.
 * - If loop finishes without an exact match, return `false`.
 * 
 * Time Complexity:  O(log3(N)) - Iterates up to log3(N) times calling floating-point pow().
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if n is a power of three using pow().
     * @param n Input integer.
     * @return true if n is a power of three, false otherwise.
     */
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        int i=0;
        while(pow(3,i) <= n) {
            if(pow(3,i) == n) return true;
            i++;
        }
        return false;
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