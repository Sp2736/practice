# LeetCode Problem 1920: Build Array from Permutation

## Problem Description
Given a zero-based permutation `nums` (an array of distinct integers from `0` to `nums.length - 1`), build an array `ans` of the same length where `ans[i] = nums[nums[i]]` for each `0 <= i < nums.length`.

## Solution Comparison

| Metric / Feature | Human Approach (`problem-1920.cpp`) | Optimized AI-assisted Approach (`problem-1920-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Extra output vector allocation using STL iterators | In-place Euclidean division encoding (`a + b * n`) |
| **Time Complexity** | $O(N)$ (1 pass) | $O(N)$ (2 passes) |
| **Space Complexity** | $O(N)$ extra space | $O(1)$ auxiliary space (in-place) |
| **Pros & Cons** | Straightforward and clear | Optimal $O(1)$ space, but requires bit/math encoding |

> **Note**: All source file documentations were generated using LLM / AI.
