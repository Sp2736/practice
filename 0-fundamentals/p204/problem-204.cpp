/**
 * @file problem-204.cpp
 * @brief LeetCode Problem 204: Count Primes (Trial Division Approach - TLE for large N)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return the number of prime numbers strictly less than `n`.
 * 
 * Algorithm: Trial Division per Number
 * - Iterates through each integer `i` from 2 to `n - 1`.
 * - For each `i`, checks divisibility up to `sqrt(i)` using `j * j <= i`.
 * 
 * Time Complexity:  O(N * sqrt(N)) - Too slow for N = 5,000,000, causing Time Limit Exceeded (TLE).
 * Space Complexity: O(1)           - Constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Counts primes strictly less than n using trial division.
     * @param n Upper limit (exclusive).
     * @return int Number of primes less than n.
     */
    int countPrimes(int n) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            bool prime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime)
                count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    int testCases[] = {10, 0, 1, 100};

    for (int n : testCases) {
        cout << "Primes strictly less than " << n << ": " << s.countPrimes(n) << endl;
    }

    return 0;
}