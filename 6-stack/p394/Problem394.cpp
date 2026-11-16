/**
 * @file Problem394.cpp
 * @brief LeetCode Problem 394: Decode String (Stack of Pairs Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an encoded string, return its decoded string.
 * The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets
 * is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.
 * 
 * You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc.
 * Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k.
 * For example, there will not be input like 3a or 2[4].
 * 
 * Algorithm: Stack of Pairs {repeat_count, previous_string}
 * - Maintain an accumulator for multi-digit repeat count: `num = num * 10 + (c - '0')`.
 * - Maintain a string `curr` representing the decoded string built at the current nesting level.
 * - Maintain a stack `st` of pairs `pair<int, string>` to remember the state before entering a new bracket level:
 *   - On `'['`: Push `{num, curr}` onto the stack, and reset `num = 0` and `curr = ""`.
 *   - On `']'`: Retrieve `repeat = st.top().first` and `prev = st.top().second`. Pop from stack.
 *     Set `curr = prev`, and append `temp` (the decoded segment of the inner block) `repeat` times.
 *   - On regular alphabetic character: Append `c` to `curr`.
 * - Return `curr` after scanning the entire string.
 * 
 * Time Complexity:  O(MaxK * N) - Where N is string length, and MaxK is the maximum multiplier. Each character in the output is generated and copied proportionally to repeat counts.
 * Space Complexity: O(N + M) - Auxiliary stack space for nested brackets and storage for output string of length M.
 */

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <utility>
using namespace std;

class Solution {
public:
    /**
     * @brief Decodes an encoded string containing k[encoded_string] patterns.
     * @param s Input encoded string.
     * @return string Fully decoded string.
     */
    string decodeString(string s) {
        stack<pair<int, string>> st;
        string curr = "";
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c - '0');
            }
            else if(c == '[') {
                st.push({num,curr});
                num = 0;
                curr = "";
            }
            else if(c == ']') {
                int repeat = st.top().first;
                string prev = st.top().second;
                st.pop();
                string temp = curr;
                curr = prev;
                for (int i = 0; i < repeat; i++) {
                    curr += temp;
                }
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};

int main() {
    Solution sol;

    string s1 = "3[a]2[bc]";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: \"" << sol.decodeString(s1) << "\" (Expected: \"aaabcbc\")" << endl;

    string s2 = "3[a2[c]]";
    cout << "\nInput: \"" << s2 << "\"" << endl;
    cout << "Output: \"" << sol.decodeString(s2) << "\" (Expected: \"accaccacc\")" << endl;

    string s3 = "2[abc]3[cd]ef";
    cout << "\nInput: \"" << s3 << "\"" << endl;
    cout << "Output: \"" << sol.decodeString(s3) << "\" (Expected: \"abcabccdcdcdef\")" << endl;

    return 0;
}
