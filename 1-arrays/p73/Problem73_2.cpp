/**
 * @file Problem73_2.cpp
 * @brief LeetCode Problem 73: Set Matrix Zeroes (Optimal In-Place First Row/Col Marker Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.
 * You must do it in place.
 * 
 * Algorithm: First Row & First Column as State Markers
 * - Use two flags `row0` and `col0` to track if the first row or first column initially contains any zero.
 * - Scan the first row to determine `row0`, and scan the first column to determine `col0`.
 * - Use the first row (`matrix[0][j]`) and first column (`matrix[i][0]`) to store zero markers for the inner subgrid `(1..m-1, 1..n-1)`.
 * - Iterate over inner cells `(i, j) >= (1, 1)`: if `matrix[i][0] == 0 || matrix[0][j] == 0`, set `matrix[i][j] = 0`.
 * - Finally, zero out the first row if `row0` is true, and the first column if `col0` is true.
 * 
 * Time Complexity:  O(M * N) - Two full passes over the matrix of dimension m x n.
 * Space Complexity: O(1) - Constant auxiliary space, reusing existing matrix memory for flags.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Sets rows and columns to zero in-place using first row and column as markers.
     * @param matrix Reference to the m x n integer matrix.
     */
    void setZeroes(vector<vector<int>>& matrix) {
        bool row0 = false;
        bool col0 = false;
        // check if 0 exists in first row
        for (size_t j = 0; j < matrix[0].size(); j++) {
            if (matrix[0][j] == 0) {
                row0 = true;
                break;
            }
        }
        // check if 0 exists in first column
        for (size_t i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] == 0) {
                col0 = true;
                break;
            }
        }
        // use the matrix as markers for 0's
        for (size_t i = 1; i < matrix.size(); i++) {
            for (size_t j = 1; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        // put the zeroes into rows and/or columns
        for (size_t i = 1; i < matrix.size(); i++) {
            for (size_t j = 1; j < matrix[0].size(); j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        // update first row
        if (row0) {
            for (size_t j = 0; j < matrix[0].size(); j++) {
                matrix[0][j] = 0;
            }
        }
        // update first column
        if (col0) {
            for (size_t i = 0; i < matrix.size(); i++) {
                matrix[i][0] = 0;
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
