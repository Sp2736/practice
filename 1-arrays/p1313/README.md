# LeetCode Problem 1313: Decompress Run-Length Encoded List

## Problem Description
We are given a list `nums` of integers representing a list compressed with run-length encoding.
For each pair `[freq, val] = [nums[2*i], nums[2*i+1]]` (with `i >= 0`), concatenate `freq` elements with value `val` to generate a decompressed list.

Examples:
- `nums = [1,2,3,4]` -> `[2,4,4,4]` (1 of value 2 + 3 of value 4)
- `nums = [1,1,2,3]` -> `[1,3,3]`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem1313.java`) | Optimized Block-Fill (`Problem1313Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Two-pass size calculation with nested `for` loop assignment | Two-pass size calculation with bulk range fill (`Arrays.fill`) |
| **Time Complexity** | $O(N + K)$ where $K$ is total decompressed length | $O(N + K)$ |
| **Space Complexity** | $O(K)$ for output array | $O(K)$ for output array |
| **Pros & Cons** | Explicit nested loop assignment | Concise syntax using Java standard library range fill |

> **Note**: All source file documentations were generated using LLM / AI.
