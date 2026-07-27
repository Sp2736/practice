/**
 * @file problem-9.cpp
 * @brief LeetCode Problem 9: Palindrome Number (Initial Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `x`, return `true` if `x` is a palindrome integer, and `false` otherwise.
 * 
 * Algorithm: Digit Extraction and Full Reversal
 * - First count the total number of digits of `x`.
 * - Reverse `x` completely by extracting digits modulo 10 and storing in a 64-bit integer (`long long`)
 *   to avoid 32-bit signed integer overflow.
 * - Compare the reversed integer with the original input value `x`.
 * 
 * Time Complexity:  O(log10(N)) - Iterates through digits twice (digit counting and digit reversal).
 * Space Complexity: O(1)        - Uses constant auxiliary space.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @brief Checks whether an integer is a palindrome.
     * @param x Input integer.
     * @return true if x is a palindrome, false otherwise.
     */
    bool isPalindrome(int x) {
        int y = x;
        int size = 0;
        while(y>0)
        {
            y = y/10;
            size++;
        }
        y = x;
        int r=0;
        long long n=0;
        while(x>0){
            r = x%10;
            x = x/10;
            n = n*10+r;
        }
        if(n==y) return true;
        else return false;
    }
};

int main() {
    Solution s;
    int testCases[] = {121, -121, 10, 0, 12321};
    
    for (int x : testCases) {
        cout << "Is " << x << " a palindrome? " << (s.isPalindrome(x) ? "true" : "false") << endl;
    }

    return 0;
}