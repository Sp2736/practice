/**
 * @file problem-227-extra.cpp
 * @brief LeetCode Problem 227: Basic Calculator II (Infix to Postfix & Evaluation Educational Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (Educational / Foundational).
 * 
 * @details
 * Given a string `s` which represents an expression, evaluate this expression and return its value.
 * The integer division should truncate toward zero.
 * 
 * Algorithm: Two-Pass Educational Infix to Postfix + Postfix Evaluation
 * - Note: This program is meant just for explanation of very foundational level concepts.
 *   It combines Infix to Postfix conversion and Postfix evaluation into a single solution.
 *   This program is neither time efficient nor space efficient, and is strictly for educational purposes.
 * - Pass 1: Parse expression into tokens and convert from Infix to Postfix notation using Shunting-yard algorithm variant.
 * - Pass 2: Evaluate Postfix vector using a stack.
 * 
 * Time Complexity:  O(N) - Two full passes over expression tokens.
 * Space Complexity: O(N) - Extra space for storing postfix tokens vector and stack elements.
 */

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cctype>
using namespace std;

class Solution {
public:
    int precedence(char op) {
        if (op == '*' || op == '/')
            return 2;
        if (op == '+' || op == '-')
            return 1;
        return 0;
    }

    bool isOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }

    vector<string> infixToPostfix(string s) {
        vector<string> postfix;
        stack<char> operators;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ')
                continue;
            // Read complete number
            if (isdigit(s[i])) {
                string num = "";
                while (i < s.length() && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }
                postfix.push_back(num);
                i--;
            }
            // Operator
            else if (isOperator(s[i])) {
                while (!operators.empty() &&
                       precedence(operators.top()) >= precedence(s[i])) {
                    postfix.push_back(string(1, operators.top()));
                    operators.pop();
                }
                operators.push(s[i]);
            }
        }
        // Empty remaining operators
        while (!operators.empty()) {
            postfix.push_back(string(1, operators.top()));
            operators.pop();
        }
        return postfix;
    }

    int evaluatePostfix(vector<string>& postfix) {
        stack<int> st;
        for (string token : postfix) {
            // Operand
            if (isdigit(token[0])) {
                st.push(stoi(token));
            }
            // Operator
            else {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int result;
                if (token == "+")
                    result = n2 + n1;
                else if (token == "-")
                    result = n2 - n1;
                else if (token == "*")
                    result = n2 * n1;
                else
                    result = n2 / n1;
                st.push(result);
            }
        }
        return st.top();
    }

    int calculate(string s) {
        vector<string> postfix = infixToPostfix(s);
        return evaluatePostfix(postfix);
    }
};

int main() {
    Solution sol;
    string expr = "3+2*2";
    cout << "Expression: \"" << expr << "\" -> Result: " << sol.calculate(expr) << endl;
    return 0;
}