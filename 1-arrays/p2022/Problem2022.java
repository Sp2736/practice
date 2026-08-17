import java.util.Arrays;

/**
 * @file Problem2022.java
 * @brief LeetCode Problem 2022: Convert 1D Array Into 2D Array (Row-Major Order Traversal)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You are given a 0-indexed 1D integer array `original`, and two integers `m` and `n`.
 * You are tasked with creating a 2D array with `m` rows and `n` columns using all the elements from `original`.
 * The elements from `original` should be filled into the 2D array in row-major order.
 * Return an `m x n` 2D array. If it is impossible, return an empty 2D array.
 * 
 * Algorithm: Row-Major Order Traversal
 * - Check if total elements `original.length == m * n`. If not, return `new int[0][0]`.
 * - Allocate a 2D array `result[m][n]`.
 * - Maintain a pointer `p` to iterate linearly through `original` while filling `result[i][j]` sequentially.
 * 
 * Time Complexity:  O(M * N) - Single pass through original array of size M * N.
 * Space Complexity: O(M * N) - Space for output 2D array.
 */

public class Problem2022 {
    /**
     * Constructs an m x n 2D array from 1D original array in row-major order.
     * @param original 1D array of integers.
     * @param m Number of rows.
     * @param n Number of columns.
     * @return 2D array of dimensions m x n, or empty 2D array if impossible.
     */
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(original.length != m * n) {
            int[][] empty = new int[0][0];
            return empty;
        }
        int[][] result = new int[m][n];
        int p = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++, p++) {
                result[i][j] = original[p];
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Problem2022 s = new Problem2022();
        int[] original = {1, 2, 3, 4};
        int m = 2, n = 2;
        int[][] result = s.construct2DArray(original, m, n);
        System.out.println("Result 2D Array: " + Arrays.deepToString(result));
    }
}