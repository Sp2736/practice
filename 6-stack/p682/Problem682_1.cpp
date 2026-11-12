/**
 * @file Problem682_1.cpp
 * @brief LeetCode Problem 682: Baseball Game (Standard Stack Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are keeping score for a baseball game with strange rules. The game consists of several rounds,
 * where the scores of past rounds may affect future rounds' scores.
 * 
 * At the beginning of the game, you start with an empty record. You are given a list of strings `operations`,
 * where `operations[i]` is the ith operation:
 * - An integer `x`: Record a new score of `x`.
 * - `"+"`: Record a new score that is the sum of the previous two scores.
 * - `"D"`: Record a new score that is double the previous score.
 * - `"C"`: Invalidate the previous score, removing it from the record.
 * 
 * Return the sum of all the scores on the record after applying all the operations.
 * 
 * Algorithm: std::stack Simulation
 * - Maintain a `std::stack<int> score` for recorded scores.
 * - For `"C"`: Pop the top score.
 * - For `"D"`: Read `score.top()`, push `2 * x`.
 * - For `"+"`: Pop top two values `x` and `y` to read them, push back in order (`y`, then `x`), and push their sum `x + y`.
 * - For integer string: Parse with `std::stoi(s)` and push to stack.
 * - Finally, empty the stack while accumulating into `sum`.
 * 
 * Time Complexity:  O(N) - Linear pass through operations list, followed by popping all elements to compute sum.
 * Space Complexity: O(N) - Auxiliary stack memory storing scores.
 */

#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes total baseball game score using std::stack.
     * @param operations List of string operations.
     * @return int Total sum of valid scores.
     */
    int calPoints(vector<string>& operations) {
        stack<int> score;
        for(string s : operations) {
            if(s == "C") {
                score.pop();
            }
            else if(s == "D") {
                int x = score.top();
                score.push(2*x);
            }
            else if(s == "+") {
                int x = score.top();
                score.pop();
                int y = score.top();
                score.pop();
                score.push(y);
                score.push(x);
                score.push(x+y);
            }
            else {
                score.push(stoi(s));
            }
        }
        int sum = 0;
        while(!score.empty()) {
            sum += score.top();
            score.pop();
        }
        return sum;
    }
};

int main() {
    Solution sol;

    vector<string> ops1 = {"5", "2", "C", "D", "+"};
    cout << "Operations: [\"5\", \"2\", \"C\", \"D\", \"+\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops1) << endl; // Expected: 30

    vector<string> ops2 = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << "\nOperations: [\"5\", \"-2\", \"4\", \"C\", \"D\", \"9\", \"+\", \"+\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops2) << endl; // Expected: 27

    vector<string> ops3 = {"1", "C"};
    cout << "\nOperations: [\"1\", \"C\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops3) << endl; // Expected: 0

    return 0;
}


int main() {
    Solution sol;

    vector<string> ops1 = {"5", "2", "C", "D", "+"};
    cout << "Operations: [\"5\", \"2\", \"C\", \"D\", \"+\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops1) << endl; // Expected: 30

    vector<string> ops2 = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << "\nOperations: [\"5\", \"-2\", \"4\", \"C\", \"D\", \"9\", \"+\", \"+\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops2) << endl; // Expected: 27

    vector<string> ops3 = {"1", "C"};
    cout << "\nOperations: [\"1\", \"C\"]" << endl;
    cout << "Total Score: " << sol.calPoints(ops3) << endl; // Expected: 0

    return 0;
}