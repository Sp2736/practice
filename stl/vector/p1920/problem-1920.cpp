#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
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