# LeetCode Problem 283: Move Zeroes

## Problem Description
Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Examples:
- `nums = [0,1,0,3,12]` -> `[1,3,12,0,0]`
- `nums = [0]` -> `[0]`

## Solution Comparison

| Metric / Feature | Overwrite & Fill Approach (`Problem283.cpp`) | Optimal Single-Pass Swap (`Problem283Opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Developed after studying & taking hints from AI |
| **Algorithm** | Two-pass approach: shifts non-zero elements forward with pointer `j`, then fills remaining indices up to `n - 1` with zeros | Single-pass partition: maintains `lastNonZeroFoundAt` and swaps `nums[lastNonZeroFoundAt]` with `nums[cur]` whenever a non-zero is found |
| **Time Complexity** | $O(N)$ (always $N$ writes/reads) | $O(N)$ (operations proportional to number of non-zeros) |
| **Space Complexity** | $O(1)$ constant auxiliary space (in-place) | $O(1)$ constant auxiliary space (in-place) |
| **Pros & Cons** | Intuitive and simple logic, but writes to every element (including setting trailing zeroes) | Optimal number of array writes; handles zero-heavy and prefix-zero arrays with minimal moves in a single pass |

> **Note**: All source file documentations were generated using LLM / AI.
