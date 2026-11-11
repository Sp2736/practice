/**
 * @file Problem73_1.cpp
 * @brief LeetCode Problem 73: Set Matrix Zeroes (Hash Set Marker Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.
 * You must do it in place.
 * 
 * Algorithm: Hash Set Row/Column Tracking
 * - Use two unordered sets: `rows` and `columns` to record the indices of rows and columns containing zeros.
 * - Pass 1: Traverse the matrix and whenever `matrix[i][j] == 0`, insert `i` into `rows` and `j` into `columns`.
 * - Pass 2: Traverse the matrix again; if `rows.contains(i)` or `columns.contains(j)`, set `matrix[i][j] = 0`.
 * 
 * Time Complexity:  O(M * N) - Two full traversals of the m x n matrix with O(1) average hash set lookups.
 * Space Complexity: O(M + N) - Auxiliary space required to store unique zero row and column indices.
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    /**
     * @brief Sets rows and columns containing zeroes to zero using unordered sets.
     * @param matrix Reference to the m x n integer matrix.
     */
    void setZeroes(vector<vector<int>>& matrix) {
        // using unordered because it doesnt maintain tree for sorting
        unordered_set<int> rows;
        unordered_set<int> columns;
        for(size_t i = 0; i < matrix.size(); i++) {
            for(size_t j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for(size_t i = 0; i < matrix.size(); i++) {
            for(size_t j = 0; j < matrix[0].size(); j++) {
                if(rows.count(i) || columns.count(j)) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "[ ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    Solution s;

    vector<vector<int>> matrix1 = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    cout << "Original Matrix 1:" << endl;
    printMatrix(matrix1);
    s.setZeroes(matrix1);
    cout << "Zeroed Matrix 1:" << endl;
    printMatrix(matrix1);

    vector<vector<int>> matrix2 = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    cout << "\nOriginal Matrix 2:" << endl;
    printMatrix(matrix2);
    s.setZeroes(matrix2);
    cout << "Zeroed Matrix 2:" << endl;
    printMatrix(matrix2);

    return 0;
}
