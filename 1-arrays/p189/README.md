# LeetCode Problem 189: Rotate Array

## Problem Description
Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

Examples:
- `nums = [1,2,3,4,5,6,7], k = 3` -> `[5,6,7,1,2,3,4]`
- `nums = [-1,-100,3,99], k = 2` -> `[3,99,-1,-100]`

## Solution Comparison

| Metric / Feature | Human Auxiliary Array (`Problem189.java`) | Optimized In-Place Reversal (`Problem189Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Auxiliary array copy using modulo offset formula `(i + n - k) % n` | Three-step in-place reversal (`[0, n-1]`, `[0, k-1]`, `[k, n-1]`) |
| **Time Complexity** | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(N)$ auxiliary space for copy array | $O(1)$ auxiliary space (in-place) |
| **Pros & Cons** | Intuitive and simple indexing | Meets the $O(1)$ extra space constraint without additional memory overhead |

> **Note**: All source file documentations were generated using LLM / AI.
