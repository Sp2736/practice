#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector <int> twoSum(vector<int>& nums, int target) {
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
