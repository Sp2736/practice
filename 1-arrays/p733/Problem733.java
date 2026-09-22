/**
 * @file Problem733.java
 * @brief LeetCode Problem 733: Flood Fill (Depth-First Search / Recursive Traversal)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * An image is represented by an `m x n` integer grid `image` where `image[i][j]` represents the pixel value.
 * You are also given three integers `sr`, `sc`, and `color`. You should perform a flood fill on the image
 * starting from the pixel `image[sr][sc]`.
 * 
 * Algorithm: Depth-First Search (DFS) Recursion
 * - Store the starting pixel color `original = image[sr][sc]`.
 * - If `original == color`, no fill is needed; return `image` directly to avoid infinite recursion loops.
 * - Recursively explore in 4 directions (up, down, left, right):
 *   - Base cases: Check bounds (`r < 0`, `r >= rows`, `c < 0`, `c >= cols`) or if `image[r][c] != original`.
 *   - Mutate `image[r][c] = color` and recurse on neighboring cells.
 * 
 * Time Complexity:  O(M * N) - Where M is rows and N is columns; each pixel is visited at most once.
 * Space Complexity: O(M * N) - Worst-case recursion stack depth in a connected grid.
 */

public class Problem733 {
    /**
     * Performs flood fill algorithm starting from (sr, sc) using target color.
     * @param image 2D grid of pixel values.
     * @param sr Starting row index.
     * @param sc Starting column index.
     * @param color New color to fill.
     * @return Updated 2D image grid.
     */
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int original = image[sr][sc];
        if (original == color)
            return image;
        fill(image, sr, sc, original, color);
        return image;
    }

    /**
     * Helper DFS method to recursively fill connected pixels of original color.
     * @param image 2D grid.
     * @param r Current row.
     * @param c Current column.
     * @param original Original starting pixel color.
     * @param color New color to set.
     */
    public void fill(int[][] image, int r, int c, int original, int color) {
        // out of bounds
        if (r < 0 || r >= image.length || c < 0 || c >= image[0].length)
            return;

        // not part of the region
        if (image[r][c] != original)
            return;

        // fill current cell
        image[r][c] = color;

        // explore all directions
        fill(image, r + 1, c, original, color);
        fill(image, r - 1, c, original, color);
        fill(image, r, c + 1, original, color);
        fill(image, r, c - 1, original, color);
    }

    public static void main(String[] args) {
        Problem733 s = new Problem733();
        int[][] image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};  
        int sr = 1, sc = 1, color = 2;
        int[][] result = s.floodFill(image, sr, sc, color);
        for(int[] row : result) {
            for(int x : row)
                System.out.print(x + " ");
            System.out.println();
        }
    }
}