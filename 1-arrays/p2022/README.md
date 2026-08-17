# LeetCode Problem 2022: Convert 1D Array Into 2D Array

## Problem Description
You are given a 0-indexed 1D integer array `original`, and two integers `m` and `n`. You are tasked with creating a 2D array with `m` rows and `n` columns using all the elements from `original`. The elements from `original` should be filled into the 2D array in row-major order.
Return an `m x n` 2D array. If it is impossible, return an empty 2D array.

Examples:
- `original = [1,2,3,4]`, `m = 2`, `n = 2` -> `[[1,2],[3,4]]`
- `original = [1,2,3]`, `m = 1`, `n = 3` -> `[[1,2,3]]`
- `original = [1,2]`, `m = 1`, `n = 1` -> `[]`

## Solution Overview

| Metric / Feature | Human Approach (`Problem2022.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Row-Major Order Traversal with linear pointer indexing |
| **Time Complexity** | $O(M \times N)$ |
| **Space Complexity** | $O(M \times N)$ for result matrix |
| **Notes** | No separate `Problem2022Opt.java` file is required as single-pass row-major construction is already optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
