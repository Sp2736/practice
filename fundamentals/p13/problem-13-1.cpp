/**
 * @file problem-13-1.cpp
 * @brief LeetCode Problem 13: Roman to Integer (Initial Flag-based Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a roman numeral, convert it to an integer.
 * 
 * Algorithm: Character Inspection with Subtraction Flags
 * - Iterates through characters of string `s`.
 * - Uses boolean flags (`dflag`, `mflag`, etc.) to track when subtractive pairs
 *   (e.g., `IV` -> 4, `IX` -> 9, `XL` -> 40, `XC` -> 90, `CD` -> 400, `CM` -> 900)
 *   have already contributed their subtractive values so subsequent characters aren't double counted.
 * 
 * Time Complexity:  O(N) - Single linear traversal over the string length N.
 * Space Complexity: O(1) - Constant auxiliary storage for flags and variables.
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Converts a Roman numeral string to an integer.
     * @param s Input Roman numeral string.
     * @return int Integer representation of the Roman numeral.
     */
    int romanToInt(string s) {

        int x=0;
        int i=0;

        bool dflag=false;
        bool mflag=false;
        bool lflag=false;
        bool cflag=false;
        bool vflag=false;
        bool xflag=false;

        while(s[i] != '\0') {
            if(s[i] == 'M' && !mflag) x+=1000;
            else if(s[i] == 'D' && !dflag) x+=500;

            else if(s[i] == 'C' && !cflag) {
                if(s[i+1] == 'D') {x+=400; dflag=true;}
                else if(s[i+1] == 'M') {x+=900; mflag=true;}
                else x+=100;
            }

            else if(s[i] == 'L' && !lflag) x+=50;

            else if(s[i] == 'X' && !xflag) {
                if(s[i+1] == 'L') { x+=40; lflag=true; }
                else if(s[i+1] == 'C') {x+=90; cflag=true;}
                else x+=10;
            }

            else if(s[i] == 'V' && !vflag) x+=5;

            else if(s[i] == 'I') {
                if(s[i+1] == 'V') { vflag=true; x+=4;}
                else if(s[i+1] == 'X') {x+=9; xflag=true;}
                else x+=1;
            }
            i++;
        }
        return x;
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