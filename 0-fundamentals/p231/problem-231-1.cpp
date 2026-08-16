/**
 * @file problem-231-1.cpp
 * @brief LeetCode Problem 231: Power of Two (Initial Power Generation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.
 * 
 * Algorithm: Power Calculation via pow()
 * - Increment exponent `i` starting from 0 while `pow(2, i) <= n`.
 * - If `pow(2, i) == n` at any step, return `true`.
 * - If loop finishes without an exact match, return `false`.
 * 
 * Time Complexity:  O(log2(N)) - Iterates up to log2(N) times calling floating-point pow().
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if n is a power of two using pow() function.
     * @param n Input integer.
     * @return true if n is a power of two, false otherwise.
     */
    bool isPalindrome(int n) { // preserves original interface while adding main entry point
        int i=0;
        while(pow(2,i) <= n) {
            if(pow(2,i) == n) return true;
            i++;
        }
        return false;
    }

    bool isPowerOfTwo(int n) {
        int i=0;
        while(pow(2,i) <= n) {
            if(pow(2,i) == n) return true;
            i++;
        }
        return false;
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