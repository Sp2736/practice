/**
 * @file problem-1920-opt.cpp
 * @brief LeetCode Problem 1920: Build Array from Permutation (In-Place Optimized O(1) Space)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given a zero-based permutation `nums` of length `n`, build an array `ans` where `ans[i] = nums[nums[i]]`.
 * 
 * Algorithm: Mathematical Math Encoding (Euclidean Division Technique)
 * - Goal: Store both old value `nums[i]` and new value `nums[nums[i]]` at index `i` without extra space.
 * - Form: `nums[i] = old_value + (new_value % n) * n`
 *   - `nums[i] % n` yields `old_value`.
 *   - `nums[i] / n` yields `new_value`.
 * - Pass 1: Encode both old and new values into each array element:
 *   `nums[i] += (nums[nums[i]] % n) * n`
 * - Pass 2: Extract the new value by dividing each element by `n`:
 *   `nums[i] /= n`
 * 
 * Time Complexity:  O(N) - Two sequential passes over the array of size N.
 * Space Complexity: O(1) - In-place transformation without auxiliary arrays.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Transforms array in-place such that `nums[i] = nums[nums[i]]`.
     * @param nums Reference to the 0-indexed permutation array.
     * @return vector<int>& The transformed array (modified in-place).
     */
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();

        // Encode both old and new value
        for (int i = 0; i < n; i++) {
            nums[i] += (nums[nums[i]] % n) * n;
        }

        // Extract the new value
        for (int i = 0; i < n; i++) {
            nums[i] /= n;
        }

        return nums;
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