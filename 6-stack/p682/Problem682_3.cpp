/**
 * @file Problem682_3.cpp
 * @brief LeetCode Problem 682: Baseball Game (Optimal Vector with Running Sum Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are keeping score for a baseball game with strange rules.
 * Operations:
 * - Integer `x`: Record score `x`.
 * - `"+"`: Sum of previous two scores.
 * - `"D"`: Double the previous score.
 * - `"C"`: Invalidate previous score.
 * 
 * Algorithm: std::vector with Immediate Running Total Tracking
 * - Maintain a running total `sum` updated synchronously with each operation:
 *   - `"C"`: Subtract `score.back()` from `sum` before popping it.
 *   - `"D"`: Add `2 * score.back()` to both vector and `sum`.
 *   - `"+"`: Add `score.back() + score[score.size() - 2]` to both vector and `sum`.
 *   - Integer string: Add `stoi(s)` to both vector and `sum`.
 * - Eliminates the need for a separate final summation pass over the scores.
 * 
 * Time Complexity:  O(N) - Single pass through `operations`; every operation does O(1) arithmetic updates.
 * Space Complexity: O(N) - Storage for the historical scores needed by future operations.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes total baseball game score with running summation.
     * @param operations List of string operations.
     * @return int Total sum of valid scores.
     */
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int sum = 0;
        for (string s : operations) {
            if (s == "C") {
                sum -= score.back();
                score.pop_back();
            }
            else if (s == "D") {
                int x = 2 * score.back();
                score.push_back(x);
                sum += x;
            }
            else if (s == "+") {
                int x = score.back() + score[score.size() - 2];
                score.push_back(x);
                sum += x;
            }
            else {
                int x = stoi(s);
                score.push_back(x);
                sum += x;
            }
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