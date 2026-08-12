/**
 * @file problem-12.cpp
 * @brief LeetCode Problem 12: Integer to Roman (Standard Conditional Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `num`, convert it to a Roman numeral.
 * Roman numerals are represented by seven different symbols: I (1), V (5), X (10), L (50), C (100), D (500), and M (1000).
 * Subtractive forms are used for 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD), and 900 (CM).
 * 
 * Algorithm: Greedy Subtraction via `if-else if` Branches
 * - Iteratively check if `num` is greater than or equal to specific thresholds in descending order (1000 down to 1).
 * - Append the corresponding symbol to the result string `roman` and subtract the value from `num`.
 * 
 * Time Complexity:  O(1) - The loop runs at most a small fixed number of times since input `num <= 3999`.
 * Space Complexity: O(1) - Auxiliary space used is constant.
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts an integer to a Roman numeral string using greedy subtraction conditional checks.
     * @param num Integer between 1 and 3999.
     * @return string Equivalent Roman numeral representation.
     */
    string intToRoman(int num) {
        if(num>3999 || num<1) {
            exit(1);
        }
        string roman;
        while(num!=0) {
            if(num>=1000) {
                roman += "M";
                num -= 1000;
            }
            else if(num>=900 && num<1000) {
                roman += "CM";
                num -= 900;
            }
            else if(num>=500) {
                roman += "D";
                num -= 500;
            }
            else if(num>=400 && num < 500) {
                roman += "CD";
                num -= 400;
            }
            else if(num>=100) {
                roman += "C";
                num -= 100;
            }
            else if(num>=90 && num<100) {
                roman += "XC";
                num -= 90;
            }
            else if(num>=50) {
                roman += "L";
                num -= 50;
            }
            else if(num>=40 && num<50) {
                roman += "XL";
                num -= 40;
            }
            else if(num>=10) {
                roman += "X";
                num -= 10;
            }
            else if(num==9) {
                roman += "IX";
                num -= 9;
            }
            else if(num>=5) {
                roman += "V";
                num -= 5;
            }
            else if(num==4) {
                roman += "IV";
                num -= 4;
            }
            else if(num>=1) {
                roman += "I";
                num -= 1;
            }
        }
        return roman;
    }
};

int main() {
    Solution s;
    int num = 3749;
    cout << "Integer: " << num << " -> Roman: " << s.intToRoman(num) << endl;
    return 0;
}