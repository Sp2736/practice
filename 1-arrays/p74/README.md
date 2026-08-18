# LeetCode Problem 74: Search a 2D Matrix

## Problem Description
You are given an `m x n` integer matrix `matrix` with the following two properties:
- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true` if `target` is in `matrix` or `false` otherwise.
You must write a solution in $O(\log(m \times n))$ time complexity.

Examples:
- `matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 3` -> `true`
- `matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 13` -> `false`

## Solution Overview

| Metric / Feature | Human Approach (`Problem74.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Virtual 1D Binary Search (`row = mid / cols`, `col = mid % cols`) |
| **Time Complexity** | $O(\log(M \times N))$ |
| **Space Complexity** | $O(1)$ auxiliary space |
| **Notes** | No separate `Problem74Opt.java` file is required as 1D virtual binary search achieves the optimal $O(\log(M \times N))$ complexity bound. |

> **Note**: All source file documentations were generated using LLM / AI.
