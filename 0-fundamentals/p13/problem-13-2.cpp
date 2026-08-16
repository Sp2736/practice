/**
 * @file problem-13-2.cpp
 * @brief LeetCode Problem 13: Roman to Integer (Switch-based Value Lookup Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a roman numeral, convert it to an integer.
 * 
 * Algorithm: Right-to-Left Comparison with Helper Switch Function
 * - Uses a helper function `value(char c)` with a `switch` statement to map Roman symbols to values.
 * - Iterates left-to-right through string `s`.
 * - If current symbol's value is strictly smaller than the next symbol's value (e.g., `IV` -> `1 < 5`),
 *   subtract `curr` from total (`ans -= curr`).
 * - Otherwise, add `curr` to total (`ans += curr`).
 * 
 * Time Complexity:  O(N) - Linear traversal over the string length N.
 * Space Complexity: O(1) - Switch lookup uses no auxiliary memory.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int value(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            int curr = value(s[i]);

            if (i + 1 < s.size() && curr < value(s[i + 1]))
                ans -= curr;
            else
                ans += curr;
        }

        return ans;
    }
};

int main() {
    Solution s;
    string testCases[] = {"III", "LVIII", "MCMXCIV"};

    for (const string& str : testCases) {
        cout << "Roman: " << str << " => Integer: " << s.romanToInt(str) << endl;
    }

    return 0;
}