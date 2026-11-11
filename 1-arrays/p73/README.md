# LeetCode Problem 73: Set Matrix Zeroes

## Problem Description
Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it in place.

Examples:
- `matrix = [[1,1,1],[1,0,1],[1,1,1]]` -> `[[1,0,1],[0,0,0],[1,0,1]]`
- `matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]` -> `[[0,0,0,0],[0,4,5,0],[0,3,1,0]]`

## Solution Comparison

| Metric / Feature | Hash Set Row/Col Markers (`Problem73_1.cpp`) | In-Place First Row/Col Markers (`Problem73_2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic |
| **Algorithm** | Tracks rows and columns with zeros using two `std::unordered_set<int>` containers | Reuses the matrix's first row and first column as markers, using two boolean flags (`row0`, `col0`) |
| **Time Complexity** | $O(M \times N)$ | $O(M \times N)$ |
| **Space Complexity** | $O(M + N)$ auxiliary memory | $O(1)$ constant auxiliary memory (strictly in-place) |
| **Pros & Cons** | Simple and easy to read without modifying row/col header meanings prematurely | Meets the optimal follow-up constraint of $O(1)$ additional space by repurposing matrix boundary cells |

> **Note**: All source file documentations were generated using LLM / AI.
