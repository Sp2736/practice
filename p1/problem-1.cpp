/**
 * @file problem-1.cpp
 * @brief LeetCode Problem 1: Two Sum (Brute-Force Approach)
 * 
 * @details
 * Given an array of integers `nums` and an integer `target`, return indices of the two
 * numbers such that they add up to `target`.
 * 
 * Algorithm: Brute-Force Nested Loop
 * - For each element at index `i`, loop through the remaining elements starting at `i + 1`.
 * - Check if `nums[i] + nums[j] == target`.
 * - Return the pair of indices `{i, j}` as soon as a solution is found.
 * 
 * Time Complexity:  O(N^2) - Double nested loops iterate through pairs of elements.
 * Space Complexity: O(1)   - Only uses fixed auxiliary storage (ignoring output array size).
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Finds two indices such that their elements sum to target.
     * @param nums Array of integers.
     * @param target Target sum.
     * @return vector<int> Vector containing the 2 indices of numbers adding up to target.
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);
        for(int i=0; i<nums.size(); i++)
        {
            int x = nums[i];
            index[0] = i;
            int flag=0;
            for(int j=i+1;j<nums.size();j++)
            {
                int y=nums[j];
                if(target-x == y)
                {
                    flag = 1;
                    index[1] = j;
                    break;
                }
            }
            if(flag) break;
        }
        return index;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);

    cout << "Indices: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i + 1 < result.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}

