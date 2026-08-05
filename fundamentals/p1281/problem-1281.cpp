/**
 * @file problem-1281.cpp
 * @brief LeetCode Problem 1281: Subtract the Product and Sum of Digits of an Integer (Initial Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer number `n`, return the difference between the product of its digits
 * and the sum of its digits.
 * 
 * Algorithm: Digit Extraction via Modulo and Division
 * - Extract each digit starting from the least significant digit using `n % 10`.
 * - Update the running product by multiplying the digit.
 * - Update the running sum by adding the digit.
 * - Reduce `n` using integer division `n / 10`.
 * - Return the difference `product - sum`.
 * 
 * Time Complexity:  O(log10(N)) - Loop runs proportional to the number of digits in n.
 * Space Complexity: O(1)        - Constant auxiliary space used.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes the difference between the product and sum of the digits of n.
     * @param n Input integer.
     * @return int The product of digits minus the sum of digits.
     */
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n>0) {
            int r = n%10;
            prod *= r;
            sum+=r;
            n = n/10;
        }
        return prod-sum;
    }
};

int main() {
    Solution s;
    int testCases[] = {234, 4421, 100000};
    
    for (int n : testCases) {
        cout << "subtractProductAndSum(" << n << ") = " << s.subtractProductAndSum(n) << endl;
    }
    
    return 0;
}