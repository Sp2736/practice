# LeetCode Problem 1480: Running Sum of 1d Array

## Problem Description
Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]...nums[i])`.

Return the running sum of `nums`.

Examples:
- `nums = [1,2,3,4]` -> `[1,3,6,10]` (Explanation: `[1, 1+2, 1+2+3, 1+2+3+4]`)
- `nums = [1,1,1,1,1]` -> `[1,2,3,4,5]`
- `nums = [3,1,2,10,1]` -> `[3,4,6,16,17]`

## Solution Comparison

| Metric / Feature | Human Approach 1 (`Problem1480_1.java`) | Human Approach 2 (`Problem1480_2.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written (In-Place Optimized) |
| **Algorithm** | Auxiliary array allocation with prefix accumulation | In-place prefix sum overwrite (`nums[i] += nums[i - 1]`) |
| **Time Complexity** | $O(N)$ (1 pass) | $O(N)$ (1 pass) |
| **Space Complexity** | $O(N)$ auxiliary array | $O(1)$ auxiliary space (in-place) |
| **Pros & Cons** | Preserves original array data intact | Optimal $O(1)$ auxiliary space, mutates input array in-place |

> **Note**: All source file documentations were generated using LLM / AI.
