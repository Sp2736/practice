/**
 * @file problem-1929-opt.cpp
 * @brief LeetCode Problem 1929: Concatenation of Array (Optimized STL Insertion Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer array `nums` of length `n`, create an array `ans` of length `2n`
 * where `ans` is the concatenation of two `nums` arrays.
 * 
 * Algorithm: STL vector::insert (Range Copying)
 * - Initialize `ans` as a copy of `nums` (length `n`).
 * - Call `ans.insert(ans.end(), nums.begin(), nums.end())` to append all elements of `nums` at the end.
 * - Relies on optimized low-level memory block allocation / `memcpy` under C++ STL implementation.
 * 
 * Time Complexity:  O(N) - Linear time range copy operation.
 * Space Complexity: O(N) - Memory required for output array of length 2N.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Concatenates `nums` with itself using STL `vector::insert`.
     * @param nums Reference to input vector of integers.
     * @return vector<int> Concatenated vector of length 2n.
     */
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
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