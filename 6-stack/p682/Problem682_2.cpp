/**
 * @file Problem682_2.cpp
 * @brief LeetCode Problem 682: Baseball Game (Dynamic Array / std::vector Stack Approach)
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
 * Why std::vector is a better choice than std::stack here:
 * 1. Direct Random Access: The `"+"` operation needs the top two scores. With `std::stack`, we have to
 *    `pop()` both, save them in temporaries, push them back, and then push the sum. With `std::vector`,
 *    we simply access `score.back()` and `score[score.size() - 2]` with zero temporary pops or reshuffling.
 * 2. Better Cache Locality: `std::vector` stores elements contiguously in memory, reducing pointer indirection
 *    and cache misses compared to node-based or deque-based stack adapters.
 * 3. Non-Destructive Summation: We can compute the final sum using a range-based loop or `std::accumulate`
 *    without repeatedly popping elements from the structure.
 * 
 * Time Complexity:  O(N) - Single pass through operations, followed by linear accumulation of scores.
 * Space Complexity: O(N) - Vector capacity proportional to the number of valid rounds.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes total baseball game score using std::vector.
     * @param operations List of string operations.
     * @return int Total sum of valid scores.
     */
    int calPoints(vector<string>& operations) {
        vector<int> score;
        for (string s : operations) {
            if (s == "C") {
                score.pop_back();
            }
            else if (s == "D") {
                score.push_back(2 * score.back());
            }
            else if (s == "+") {
                score.push_back(score.back() + score[score.size() - 2]);
            }
            else {
                score.push_back(stoi(s));
            }
        }
        int sum = 0;
        for (int x : score) sum += x;
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