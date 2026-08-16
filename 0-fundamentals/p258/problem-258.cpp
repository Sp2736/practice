/**
 * @file problem-258.cpp
 * @brief LeetCode Problem 258: Add Digits (Iterative Loop Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.
 * 
 * Algorithm: Iterative Digit Summation
 * - While the number has more than one digit (`num >= 10`):
 *   - Extract each digit of `num` via modulo 10 (`num % 10`) and sum them.
 *   - Divide `num` by 10 (`num /= 10`) to process all digits.
 *   - Assign the sum back to `num` and repeat.
 * 
 * Time Complexity:  O(log10(N)) - The number of digit extractions is logarithmic in the scale of the number.
 * Space Complexity: O(1)         - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Recursively adds digits until a single-digit result is reached.
     * @param num Input integer.
     * @return int The single-digit result.
     */
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int main() {
    Solution s;
    int testCases[] = {38, 0, 12345};
    
    for (int num : testCases) {
        cout << "addDigits(" << num << ") = " << s.addDigits(num) << endl;
    }
    
    return 0;
}