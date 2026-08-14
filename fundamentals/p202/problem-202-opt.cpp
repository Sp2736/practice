/**
 * @file problem-202-opt.cpp
 * @brief LeetCode Problem 202: Happy Number (Floyd's Cycle-Finding Algorithm)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Write an algorithm to determine if a number `n` is happy.
 * 
 * Algorithm: Floyd's Tortoise and Hare Cycle Detection
 * - Maintain two pointers: `slow` moving 1 step at a time (`getNext(slow)`),
 *   and `fast` moving 2 steps at a time (`getNext(getNext(fast))`).
 * - If a cycle exists, `slow` and `fast` will eventually meet.
 * - If `fast` reaches 1, the number is happy.
 * - Note: This approach trades slightly higher computation time for O(1) space efficiency.
 * 
 * Time Complexity:  O(log N) - Small finite steps; computes `getNext` twice per loop step.
 * Space Complexity: O(1)     - Optimal auxiliary space (no hash set required).
 */

#include <iostream>
using namespace std;

// mention in the explanation that this approach compromises time for space efficiency
class Solution {
public:
    /**
     * @brief Computes sum of squares of digits of n.
     * @param n Input integer.
     * @return int Sum of squared digits.
     */
    int getNext(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    /**
     * @brief Determines if n is happy using Floyd's Tortoise and Hare algorithm.
     * @param n Input integer.
     * @return true if happy, false otherwise.
     */
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};

int main() {
    Solution s;
    int n = 19;
    cout << "isHappy(" << n << "): " << (s.isHappy(n) ? "true" : "false") << endl;
    return 0;
}