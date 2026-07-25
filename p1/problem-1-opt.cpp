#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
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
