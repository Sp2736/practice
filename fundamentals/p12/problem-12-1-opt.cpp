/**
 * @file problem-12-1-opt.cpp
 * @brief LeetCode Problem 12: Integer to Roman (Optimized Greedy Lookup Table Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer `num`, convert it to a Roman numeral.
 * 
 * Algorithm: Greedy Subtraction via Parallel Vectors
 * - Store values (1000 down to 1, including subtractive combinations) and their matching Roman symbol strings in two lookup vectors.
 * - Iterate through the arrays, repeatedly appending `symbols[i]` while `num >= values[i]` and reducing `num`.
 * 
 * Time Complexity:  O(1) - Fixed max 13 iterations over constant arrays.
 * Space Complexity: O(1) - Fixed sized lookup tables.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts an integer to a Roman numeral string using parallel lookup tables.
     * @param num Integer between 1 and 3999.
     * @return string Equivalent Roman numeral representation.
     */
    string intToRoman(int num) {

        vector<int> values = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        vector<string> symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        string roman;

        for(int i = 0; i < values.size(); i++) {
            while(num >= values[i]) {
                roman += symbols[i];
                num -= values[i];
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