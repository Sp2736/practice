/**
 * @file Problem1441.cpp
 * @brief LeetCode Problem 1441: Build an Array With Stack Operations (Stream Simulation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are given an integer array `target` and an integer `n`.
 * You have an empty stack with the two following operations:
 * - `"Push"`: pushes an integer onto the top of the stack.
 * - `"Pop"`: removes the integer on the top of the stack.
 * 
 * You also have a stream of integers in the range `[1, n]`.
 * Use the counter `i` from `1` to `n` to read integers from the stream:
 * - If the stack target is reached or reading all stream elements is complete, stop.
 * - If the current stream integer matches the current expected element `target[j]`, push it and advance `j`.
 * - Otherwise, push the stream integer and immediately pop it.
 * 
 * Algorithm: Two-Pointer Stream Simulation
 * - Maintain index `j = 0` pointing to the next target element needed.
 * - Iterate `i` from `1` up to `n`, breaking early when `j == target.size()`.
 * - For each number `i`:
 *   - Append `"Push"` to `result`.
 *   - If `target[j] == i`, advance pointer `j++`.
 *   - Otherwise, append `"Pop"` to discard `i`.
 * 
 * Time Complexity:  O(M) - Where M is target.back() (at most min(n, target.back()) <= n iterations).
 * Space Complexity: O(M) - Space for the result operation strings.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Generates stack operations needed to build the target array.
     * @param target The target integer array.
     * @param n Upper limit of the stream [1, n].
     * @return vector<string> Sequence of "Push" and "Pop" operations.
     */
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int j = 0;
        for(int i = 1; i <= n && j < static_cast<int>(target.size()); i++) {
            result.push_back("Push");
            if(target[j] == i) {
                j++;
            }
            else {
                result.push_back("Pop");
            }
        }
        return result;
    }
};

void printResult(const vector<string>& res) {
    cout << "[";
    for (size_t i = 0; i < res.size(); i++) {
        cout << "\"" << res[i] << "\"" << (i + 1 < res.size() ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    vector<int> target1 = {1, 3};
    int n1 = 3;
    cout << "target = [1, 3], n = 3" << endl;
    cout << "Operations: ";
    printResult(sol.buildArray(target1, n1)); // Expected: ["Push","Push","Pop","Push"]

    vector<int> target2 = {1, 2, 3};
    int n2 = 3;
    cout << "\ntarget = [1, 2, 3], n = 3" << endl;
    cout << "Operations: ";
    printResult(sol.buildArray(target2, n2)); // Expected: ["Push","Push","Push"]

    vector<int> target3 = {1, 2};
    int n3 = 4;
    cout << "\ntarget = [1, 2], n = 4" << endl;
    cout << "Operations: ";
    printResult(sol.buildArray(target3, n3)); // Expected: ["Push","Push"]

    return 0;
}
