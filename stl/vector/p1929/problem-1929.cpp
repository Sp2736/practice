/**
 * @file problem-1929.cpp
 * @brief LeetCode Problem 1929: Concatenation of Array (Direct Indexing Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums` of length `n`, create an array `ans` of length `2n`
 * where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (0-indexed).
 * Specifically, `ans` is the concatenation of two `nums` arrays.
 * 
 * Algorithm: Single Pass Dual Assignment via STL Iterators
 * - Pre-allocate a vector `output` of size `2 * n`.
 * - Use an iterator `it` to traverse `nums` from beginning to end.
 * - At index `x`, place `*it` at both `output[x]` and `output[x + n]` simultaneously.
 * 
 * Time Complexity:  O(N) - Single iteration through array of size N.
 * Space Complexity: O(N) - Output array of size 2N allocated for the result.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Creates an array `ans` of length 2n which is two `nums` arrays concatenated.
     * @param nums Reference to input vector of integers.
     * @return vector<int> Concatenated vector of length 2n.
     */
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(2 * n);

        int x = 0;

        for (auto it = nums.begin(); it != nums.end(); ++it) {
            output[x] = *it;
            output[x + n] = *it;
            ++x;
        }

        return output;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1};
    vector<int> output = s.getConcatenation(nums);

    cout << "Concatenated Array: [";
    for (size_t i = 0; i < output.size(); i++) {
        cout << output[i] << (i + 1 < output.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}