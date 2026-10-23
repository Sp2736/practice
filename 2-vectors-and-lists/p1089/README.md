# LeetCode Problem 1089: Duplicate Zeros

## Problem Description
Given a fixed-length integer array `arr`, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place, do not return anything.

Examples:
- `arr = [1,0,2,3,0,4,5,0]` -> `[1,0,0,2,3,0,0,4]`
- `arr = [1,2,3]` -> `[1,2,3]`

## Solution Comparison

| Metric / Feature | Auxiliary Array Simulation (`Problem1089.java`) | Two-Pass Two-Pointer In-Place (`Problem1089Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Developed after studying & taking hints from AI |
| **Algorithm** | Copies values into a temporary buffer `result` while duplicating zeros, then writes back to `arr` | Pass 1 counts zeros that fit into array bounds; Pass 2 copies elements backwards from right to left |
| **Time Complexity** | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(N)$ auxiliary array | $O(1)$ constant auxiliary space (strictly in-place) |
| **Pros & Cons** | Straightforward forward simulation, but allocates extra memory buffer | True in-place transformation adhering to $O(1)$ space constraint |

> **Note**: All source file documentations were generated using LLM / AI.
