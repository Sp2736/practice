/**
 * @file problem-343-1.cpp
 * @brief LeetCode Problem 343: Integer Break (Mathematical Pattern Recognition via Modulo 3)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, break it into the sum of `k` positive integers (`k >= 2`) such that
 * the product of those integers is maximized. Return the maximum product you can get.
 * 
 * Algorithm: Modulo 3 Pattern Breakdown
 * - Pattern identified:
 *   - If `n % 3 == 0`: Use all 3s in the sum and product.
 *   - If `n % 3 == 1`: Use one 4 (2+2) and all remaining 3s in the sum and product.
 *   - If `n % 3 == 2`: Use one 2 and all remaining 3s in the sum and product.
 * - Handle base cases `n == 2` (returns 1) and `n == 3` (returns 2).
 * 
 * Time Complexity:  O(N) - Loop runs roughly N/3 times.
 * Space Complexity: O(1) - Constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes maximum product after breaking n into sum of k >= 2 positive integers.
     * @param n Positive integer (2 <= n <= 58).
     * @return int Maximum product obtainable.
     */
    int integerBreak(int n) {
        if(n == 2) return 1;
        if(n == 3) return 2;
        int product = 1;
        if(n%3 == 0) {
            while(n>0) {
                product *= 3;
                n -= 3;
            }
        }
        else if(n%3 == 1) {
            product *= 4;
            n -= 4;
            while(n>0) {
                product *= 3;
                n -= 3;
            }
        }
        else {
            product *= 2;
            n -= 2;
            while(n>0) {
                product *= 3;
                n -= 3;
            }
        }
        return product;
    }
};

int main() {
    Solution s;
    int n = 10;
    cout << "integerBreak(" << n << "): " << s.integerBreak(n) << endl;
    return 0;
}