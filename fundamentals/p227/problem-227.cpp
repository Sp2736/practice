/**
 * @file problem-227.cpp
 * @brief LeetCode Problem 227: Basic Calculator II (Single Stack Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a string `s` which represents an expression, evaluate this expression and return its value.
 * 
 * Algorithm: Single Pass Operator-Precedence Stack
 * - Skipping through the educational infix/postfix approach, evaluate operands dynamically.
 * - For '+' or '-': push `num` or `-num` onto the stack.
 * - For '*' or '/': pop top value from stack, execute operation with `num`, and push result back.
 * - At the end, sum all elements remaining in the stack.
 * 
 * Time Complexity:  O(N) - Single pass through the string.
 * Space Complexity: O(N) - Space for the stack storing intermediate terms.
 */

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

// skipping through the approach in problem-227-extra (stack --> direct formula approach)

/**
read a number

look at the operator before that number

if operator is +
    put number into stack

if operator is -
    put negative number into stack

if operator is *
    multiply number with the previous stack value

if operator is /
    divide previous stack value by number

at the end
    add everything in the stack
*/

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+';
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0'); // to read "123+5" we have to read 1,2,3 individually and form the number '123' ourself
            }
            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.length() - 1) {
                if (op == '+')
                    st.push(num);
                else if (op == '-')
                    st.push(-num);
                else if (op == '*') {
                    int x = st.top();
                    st.pop();
                    st.push(x * num);
                }
                else if (op == '/') {
                    int x = st.top();
                    st.pop();
                    st.push(x / num);
                }
                op = s[i];
                num = 0;
            }
        }
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};

int main() {
    Solution sol;
    string expr = "3+2*2";
    cout << "Expression: \"" << expr << "\" -> Result: " << sol.calculate(expr) << endl;
    return 0;
}