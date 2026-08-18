/**
 * @file Problem74.java
 * @brief LeetCode Problem 74: Search a 2D Matrix (Virtual 1D Binary Search Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * You are given an `m x n` integer matrix `matrix` with the following two properties:
 * - Each row is sorted in non-decreasing order.
 * - The first integer of each row is greater than the last integer of the previous row.
 * Given an integer `target`, return `true` if `target` is in `matrix` or `false` otherwise.
 * 
 * Algorithm: Virtual 1D Binary Search
 * - Treat the `m x n` matrix as a flattened 1D array of length `m * n`.
 * - Perform standard binary search with `left = 0` and `right = rows * cols - 1`.
 * - Virtual 1D index `mid` maps to 2D matrix coordinates via:
 *   - `row = mid / cols`
 *   - `col = mid % cols`
 * 
 * Time Complexity:  O(log(M * N)) - Binary search over virtual 1D array of size M * N.
 * Space Complexity: O(1) - Constant auxiliary space.
 */

public class Problem74 {
    /**
     * Searches for target in m x n matrix using 1D binary search mapping.
     * @param matrix 2D sorted matrix.
     * @param target Integer to search for.
     * @return true if target exists in matrix, false otherwise.
     */
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length; // no. of rows
        int cols = matrix[0].length; // no. of columns
        int left = 0;
        int right = rows * cols - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / cols;
            int col = mid % cols;
            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Problem74 s = new Problem74();
        int[][] matrix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 60}
        };
        int target = 3;
        System.out.println("Search Result for target " + target + ": " + s.searchMatrix(matrix, target));
    }
}