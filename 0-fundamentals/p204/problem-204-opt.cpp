/**
 * @file problem-204-opt.cpp
 * @brief LeetCode Problem 204: Count Primes (Sieve of Eratosthenes Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `n`, return the number of prime numbers strictly less than `n`.
 * 
 * Algorithm: Sieve of Eratosthenes
 * - Create a boolean array `isPrime` of size `n`, initialized to `true` (with `0` and `1` set to `false`).
 * - For each prime number `i` starting from `2` up to `sqrt(n)` (`i * i < n`):
 *   - Mark all multiples of `i` starting from `i * i` as `false`. (Using `long long` for `i * i` prevents overflow).
 * - Count all remaining `true` entries in `isPrime`.
 * 
 * Time Complexity:  O(N * log(log N)) - Optimal bound for prime generation up to N.
 * Space Complexity: O(N)               - Boolean array of size N (`vector<bool>` uses 1 bit per element).
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Counts primes strictly less than n using Sieve of Eratosthenes.
     * @param n Upper limit (exclusive).
     * @return int Number of primes less than n.
     */
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; (long long)i * i < n; i++) {
            if (isPrime[i]) {
                for (long long j = (long long)i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};

int main() {
    Solution s;
    int testCases[] = {10, 0, 1, 100, 5000000};

    for (int n : testCases) {
        cout << "Primes strictly less than " << n << ": " << s.countPrimes(n) << endl;
    }

    return 0;
}
