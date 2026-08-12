/**
 * @file problem-168.cpp
 * @brief LeetCode Problem 168: Excel Sheet Column Title (1-Indexed Base-26 Conversion)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.
 * For example:
 * - 1 -> "A", 2 -> "B", ..., 26 -> "Z"
 * - 27 -> "AA", 28 -> "AB", ..., 701 -> "ZY"
 * 
 * Algorithm: 1-Adjusted Base-26 Conversion
 * - Decrement `columnNumber` by 1 at each step to shift from 1-based indexing (`1..26`) to 0-based indexing (`0..25`).
 * - Extract the last character using `'A' + (columnNumber % 26)` and append it to `title`.
 * - Divide `columnNumber` by 26 and repeat until `columnNumber <= 0`.
 * - Reverse the resulting string `title` to restore proper character order.
 * 
 * Time Complexity:  O(log_26(N)) - Number of digits in base-26 representation.
 * Space Complexity: O(1) auxiliary space (excluding result string storage).
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts an integer column number to its corresponding Excel title string.
     * @param columnNumber Positive integer (1-indexed).
     * @return string Corresponding Excel column title.
     */
    string convertToTitle(int columnNumber) {
        string title;
        while (columnNumber > 0) {
            columnNumber--;
            title += 'A' + (columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(title.begin(), title.end());
        return title;
    }
};

int main() {
    Solution s;
    int columnNumber = 28;
    cout << "Column Number: " << columnNumber << " -> Title: " << s.convertToTitle(columnNumber) << endl;
    return 0;
}