/**
 * @file Problem283.cpp
 * @brief LeetCode Problem 283: Move Zeroes (Two-Pointer In-Place Overwrite & Fill Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums`, move all 0's to the end of it while maintaining the relative order
 * of the non-zero elements.
 * 
 * Note that you must do this in-place without making a copy of the array.
 * 
 * Algorithm: Two-Pointer Overwrite and Zero-Fill
 * - Use a write pointer `j` initialized to 0 to keep track of the position for the next non-zero element.
 * - Iterate through the array with read pointer `i` from 0 to `nums.size() - 1`:
 *   - When a non-zero element is encountered (`nums[i] != 0`), assign `nums[j] = nums[i]` and advance `j++`.
 * - After processing all elements, fill the remainder of the array from index `j` to `nums.size() - 1` with zeros.
 * 
 * Time Complexity:  O(N) - Two passes at most (one for reading/copying non-zeros, one for filling trailing zeros), totaling 2N operations.
 * Space Complexity: O(1) - Modifies the array in-place using constant auxiliary memory.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Moves all zeroes to the end of nums in-place.
     * @param nums Reference to the vector of integers.
     */
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int j = 0; // to iterate through array for writing
        for (int i = 0; i < size; i++) { // to iterate through array for reading
            if(nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        while(j < size) {
            nums[j] = 0;
            j++;
        }
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "Original: [0, 1, 0, 3, 12]" << endl;
    s.moveZeroes(nums1);
    cout << "After moveZeroes: [";
    for (size_t i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << (i + 1 < nums1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<int> nums2 = {0};
    cout << "Original: [0]" << endl;
    s.moveZeroes(nums2);
    cout << "After moveZeroes: [";
    for (size_t i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << (i + 1 < nums2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}


int main() {
    Solution s;

    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "Original: [0, 1, 0, 3, 12]" << endl;
    s.moveZeroes(nums1);
    cout << "After moveZeroes: [";
    for (size_t i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << (i + 1 < nums1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<int> nums2 = {0};
    cout << "Original: [0]" << endl;
    s.moveZeroes(nums2);
    cout << "After moveZeroes: [";
    for (size_t i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << (i + 1 < nums2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}