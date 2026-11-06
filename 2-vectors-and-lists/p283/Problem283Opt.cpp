/**
 * @file Problem283Opt.cpp
 * @brief LeetCode Problem 283: Move Zeroes (Single-Pass Optimal Two-Pointer Swap Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer array `nums`, move all 0's to the end of it while maintaining the relative order
 * of the non-zero elements.
 * 
 * Note that you must do this in-place without making a copy of the array.
 * 
 * Algorithm: Single-Pass Two-Pointer Swap (Snowball / Partition Technique)
 * - Maintain a pointer `lastNonZeroFoundAt` (initialized to 0) indicating where the next non-zero should be placed.
 * - Iterate through the array with pointer `cur` from 0 to `nums.size() - 1`:
 *   - If `nums[cur] != 0`:
 *     - Swap `nums[lastNonZeroFoundAt]` and `nums[cur]`.
 *     - Increment `lastNonZeroFoundAt++`.
 * - This achieves the goal in a single pass while minimizing the total number of operations (especially when non-zero elements outnumber zeros).
 * 
 * Time Complexity:  O(N) - Single pass through the array. Total operations equals the number of non-zero elements.
 * Space Complexity: O(1) - Strictly in-place modification with constant auxiliary space.
 */

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    /**
     * @brief Moves all zeroes to the end of nums in-place using single-pass swap.
     * @param nums Reference to the vector of integers.
     */
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        int size = nums.size();
        for (int cur = 0; cur < size; cur++) {
            if (nums[cur] != 0) {
                swap(nums[lastNonZeroFoundAt], nums[cur]);
                lastNonZeroFoundAt++;
            }
        }
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "Original: [0, 1, 0, 3, 12]" << endl;
    s.moveZeroes(nums1);
    cout << "After moveZeroes (Opt): [";
    for (size_t i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << (i + 1 < nums1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<int> nums2 = {0};
    cout << "Original: [0]" << endl;
    s.moveZeroes(nums2);
    cout << "After moveZeroes (Opt): [";
    for (size_t i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << (i + 1 < nums2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
