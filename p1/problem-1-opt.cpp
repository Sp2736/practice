/**
 * @file problem-1-opt.cpp
 * @brief LeetCode Problem 1: Two Sum (Optimized Hash Map Approach)
 * 
 * @details
 * Given an array of integers `nums` and an integer `target`, return indices of the two
 * numbers such that they add up to `target`.
 * 
 * Algorithm: One-Pass Hash Map (unordered_map)
 * - Iterate through the array while keeping track of previously seen elements in a hash map `visited`.
 * - Map stores values as key and their index as value: `map[nums[i]] = i`.
 * - For each element `nums[i]`, calculate `complement = target - nums[i]`.
 * - If `complement` already exists in `visited`, return `{visited[complement], i}`.
 * - Otherwise, store `nums[i]` in the hash map and proceed.
 * 
 * Time Complexity:  O(N) - Average O(1) hash map lookup for each of the N elements.
 * Space Complexity: O(N) - Up to N elements stored in hash map.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    /**
     * @brief Finds two indices such that their elements sum to target using unordered_map.
     * @param nums Array of integers.
     * @param target Target sum.
     * @return vector<int> Pair of indices matching the sum criteria.
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> visited;
        for(int i=0; i<nums.size(); i++) {
            int number = target - nums[i];
            if(visited.find(number) != visited.end())
            {
                return {visited[number], i};
            }
            visited[nums[i]] = i;
        }
        return {};
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

