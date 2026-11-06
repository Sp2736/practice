/**
 * @file Problem977Opt.cpp
 * @brief LeetCode Problem 977: Squares of a Sorted Array (Optimal Two-Pointer Linear Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer array `nums` sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
 * 
 * Algorithm: Two-Pointer Converging Placement
 * - Since `nums` is sorted, the largest squares will originate from either extreme: the leftmost (most negative) or rightmost (largest positive) values.
 * - Initialize `left = 0` and `right = n - 1`.
 * - Allocate a result vector of size `n` and fill it backwards from `i = n - 1` down to `0`.
 * - Compare the squares `nums[left]^2` and `nums[right]^2`:
 *   - If `nums[left]^2 > nums[right]^2`, place `nums[left]^2` at `result[i]` and advance `left++`.
 *   - Otherwise, place `nums[right]^2` at `result[i]` and decrement `right--`.
 * 
 * Time Complexity:  O(N) - Linear scan using two converging pointers visiting each element once.
 * Space Complexity: O(N) - Auxiliary space required for the output array (O(1) extra space beyond output).
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes sorted squares in O(N) time using two pointers.
     * @param nums Reference to the sorted input array.
     * @return vector<int> Array of squared values sorted in non-decreasing order.
     */
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];
            if (l > r) {
                result[i] = l;
                left++;
            }
            else {
                result[i] = r;
                right--;
            }
        }
        return result;
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {-4, -1, 0, 3, 10};
    cout << "Original: [-4, -1, 0, 3, 10]" << endl;
    vector<int> res1 = s.sortedSquares(nums1);
    cout << "Sorted Squares (Opt): [";
    for (size_t i = 0; i < res1.size(); i++) {
        cout << res1[i] << (i + 1 < res1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<int> nums2 = {-7, -3, 2, 3, 11};
    cout << "Original: [-7, -3, 2, 3, 11]" << endl;
    vector<int> res2 = s.sortedSquares(nums2);
    cout << "Sorted Squares (Opt): [";
    for (size_t i = 0; i < res2.size(); i++) {
        cout << res2[i] << (i + 1 < res2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
