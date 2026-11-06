/**
 * @file Problem977.cpp
 * @brief LeetCode Problem 977: Squares of a Sorted Array (Multiset Sorting Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums` sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
 * 
 * Algorithm: Multiset Insertion & Overwrite
 * - Compute the square of each element in `nums` and insert it into a `std::multiset<int>`.
 * - The multiset automatically maintains elements in ascending order with duplicate support.
 * - Iterate through the multiset and copy the sorted values back into `nums`.
 * - Return `nums`.
 * 
 * Time Complexity:  O(N log N) - Inserting N elements into a self-balancing BST (multiset).
 * Space Complexity: O(N) - Auxiliary space required to store elements in the multiset.
 */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    /**
     * @brief Computes sorted squares using std::multiset.
     * @param nums Reference to the sorted input array.
     * @return vector<int> Array of squared values sorted in non-decreasing order.
     */
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> sortedSquares;
        for (size_t i = 0; i < nums.size(); i++) {
            sortedSquares.insert(nums[i] * nums[i]);
        }
        int j = 0;
        for (int x : sortedSquares) {
            nums[j++] = x;
        }
        return nums;
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {-4, -1, 0, 3, 10};
    cout << "Original: [-4, -1, 0, 3, 10]" << endl;
    vector<int> res1 = s.sortedSquares(nums1);
    cout << "Sorted Squares: [";
    for (size_t i = 0; i < res1.size(); i++) {
        cout << res1[i] << (i + 1 < res1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<int> nums2 = {-7, -3, 2, 3, 11};
    cout << "Original: [-7, -3, 2, 3, 11]" << endl;
    vector<int> res2 = s.sortedSquares(nums2);
    cout << "Sorted Squares: [";
    for (size_t i = 0; i < res2.size(); i++) {
        cout << res2[i] << (i + 1 < res2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
