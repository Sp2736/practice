/**
 * @file problem-263.cpp
 * @brief LeetCode Problem 263: Ugly Number (Prime Factorization Reduction Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (Optimal Implementation).
 * 
 * @details
 * An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
 * Given an integer `n`, return `true` if `n` is an ugly number, and `false` otherwise.
 * 
 * Algorithm: Prime Factorization Reduction
 * - Key Takeaway / Story: "Sometimes complex questions require basic mathematics.
 *   This problem is simply solved using prime factorization, as one would do on paper!!"
 * - Non-positive integers (`n <= 0`) are not ugly numbers by definition.
 * - Continuously divide `n` by 2 as long as it is divisible by 2.
 * - Continuously divide `n` by 3 as long as it is divisible by 3.
 * - Continuously divide `n` by 5 as long as it is divisible by 5.
 * - If `n` reduces to 1, then its only prime factors were 2, 3, and 5 (hence ugly).
 * 
 * Time Complexity:  O(log N) - Divides n repeatedly by 2, 3, or 5.
 * Space Complexity: O(1)     - Constant auxiliary space.
 */

#include <iostream>
using namespace std;

// i learnt here that sometimes complex questions require basic mathematics. this problem is simply solved using prime factorization, as one would do on paper!!
class Solution {
public:
    /**
     * @brief Checks if integer n has prime factors limited to 2, 3, and 5.
     * @param n Input integer.
     * @return true if ugly number, false otherwise.
     */
    bool isUgly(int n) {
        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n /= 2;

        while (n % 3 == 0)
            n /= 3;

        while (n % 5 == 0)
            n /= 5;

        return n == 1;
    }
};

int main() {
    Solution s;
    int n = 6;
    cout << "isUgly(" << n << "): " << (s.isUgly(n) ? "true" : "false") << endl;
    return 0;
}