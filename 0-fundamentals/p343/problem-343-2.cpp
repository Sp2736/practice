/**
 * @file problem-343-2.cpp
 * @brief LeetCode Problem 343: Integer Break (Concise Greedy Factor 3 Reduction)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, break it into the sum of `k` positive integers (`k >= 2`) such that
 * the product of those integers is maximized.
 * 
 * Algorithm: Concise Greedy Loop with Threshold 4
 * - Base cases: for `n <= 3`, the maximum product is `n - 1` (since `k >= 2`).
 * - While `n > 4`, continuously factor out 3 (`product *= 3`, `n -= 3`).
 * - Multiply `product` by the remaining remainder `n` (which will be 2, 3, or 4).
 * 
 * Time Complexity:  O(N) - Loop runs at most N/3 times.
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
        if(n<=3)return n-1;
        int product=1;
        while(n>4){
            product*=3;
            n-=3;
        }
        product*=n;
        return product;
    }
};

int main() {
    Solution s;
    int n = 10;
    cout << "integerBreak(" << n << "): " << s.integerBreak(n) << endl;
    return 0;
}