# LeetCode Problem 733: Flood Fill

## Problem Description
An image is represented by an `m x n` integer grid `image` where `image[i][j]` represents the pixel value. You are also given three integers `sr`, `sc`, and `color`. You should perform a flood fill on the image starting from the pixel `image[sr][sc]`.

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with `color`.

Return the modified image after performing the flood fill.

Examples:
- `image = [[1,1,1],[1,1,0],[1,0,1]]`, `sr = 1`, `sc = 1`, `color = 2` -> `[[2,2,2],[2,2,0],[2,0,1]]`
- `image = [[0,0,0],[0,0,0]]`, `sr = 0`, `sc = 0`, `color = 0` -> `[[0,0,0],[0,0,0]]`

## Solution Overview

| Metric / Feature | Human Approach (`Problem733.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Depth-First Search (DFS) recursion with 4-directional traversal |
| **Time Complexity** | $O(M \times N)$ where $M$ is rows and $N$ is columns |
| **Space Complexity** | $O(M \times N)$ worst-case recursion stack space |
| **Notes** | No separate `Problem733Opt.java` file is required as 4-directional DFS traversal is already optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
