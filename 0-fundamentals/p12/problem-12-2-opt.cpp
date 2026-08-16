/**
 * @file problem-12-2-opt.cpp
 * @brief LeetCode Problem 12: Integer to Roman (Optimized Positional Digit Mapping Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `num`, convert it to a Roman numeral.
 * 
 * Algorithm: Hardcoded Place Value Lookups
 * - Separate input into thousands, hundreds, tens, and units places using division and modulo arithmetic.
 * - Map each digit directly to precomputed static array strings (`M`, `C`, `X`, `I`).
 * 
 * Time Complexity:  O(1) - Constant number of arithmetic operations and string concatenations.
 * Space Complexity: O(1) - Static lookup tables stored in memory.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts an integer to a Roman numeral string using digit place-value mapping arrays.
     * @param num Integer between 1 and 3999.
     * @return string Equivalent Roman numeral representation.
     */
    string intToRoman(int num) {
        static const string M[] = {"", "M", "MM", "MMM"};
        static const string C[] = {
            "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"
        };
        static const string X[] = {
            "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"
        };
        static const string I[] = {
            "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"
        };

        return M[num / 1000] +
               C[(num % 1000) / 100] +
               X[(num % 100) / 10] +
               I[num % 10];
    }
};

int main() {
    Solution s;
    int num = 3749;
    cout << "Integer: " << num << " -> Roman: " << s.intToRoman(num) << endl;
    return 0;
}