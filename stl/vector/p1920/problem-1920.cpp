/**
 * @file problem-1920.cpp
 * @brief LeetCode Problem 1920: Build Array from Permutation (Standard Approach)
 * 
 * @details
 * Given a zero-based permutation `nums` (an array of distinct integers from 0 to nums.length - 1),
 * build an array `ans` of the same length where `ans[i] = nums[nums[i]]` for each `0 <= i < nums.length`.
 * 
 * Algorithm: Extra Array / Vector Allocation
 * - Iterate through `nums` using STL vector iterators.
 * - Append `nums[*it]` to the output vector `ans`.
 * 
 * Time Complexity:  O(N) - Single pass through the input vector.
 * Space Complexity: O(N) - Auxiliary space required for the output array `ans`.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    /**
     * @brief Constructs array `ans` where `ans[i] = nums[nums[i]]`.
     * @param nums A 0-indexed permutation array.
     * @return vector<int> Permutation output vector.
     */
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> output;
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            output.push_back(nums[*(it)]);
        }
        return output;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> output(s.buildArray(nums));
    for (auto it = output.begin(); it != output.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}