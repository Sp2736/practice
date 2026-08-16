/**
 * @file problem-171.cpp
 * @brief LeetCode Problem 171: Excel Sheet Column Number (Base-26 Iterative Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * Given a string `columnTitle` that represents the column title as appears in an Excel sheet,
 * return its corresponding column number.
 * For example:
 * - A -> 1, B -> 2, ..., Z -> 26
 * - AA -> 27, AB -> 28, ...
 * 
 * Algorithm: Base-26 Positional Value Accumulation
 * - Process each character from left to right.
 * - Multiply the accumulated `result` by 26 and add the numeric value of the current character `(c - 'A' + 1)`.
 * - This approach is already optimal in both time and space complexity.
 * 
 * Time Complexity:  O(N) - Where N is the length of `columnTitle`.
 * Space Complexity: O(1) - Auxiliary space used is constant.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts Excel column title string to corresponding integer column number.
     * @param columnTitle Input Excel column title string (e.g., "AB", "ZY").
     * @return int Equivalent 1-indexed column number.
     */
    int titleToNumber(string columnTitle) {
        int result = 0;

        for (char c : columnTitle)
            result = result * 26 + (c - 'A' + 1); // since we use A=1 and not A=0

        return result;
    }
};

int main() {
    Solution s;
    string columnTitle = "AB";
    cout << "Column Title: " << columnTitle << " -> Column Number: " << s.titleToNumber(columnTitle) << endl;
    return 0;
}