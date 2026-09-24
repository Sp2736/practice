# LeetCode Problem 41: First Missing Positive

## Problem Description
Given an unsorted integer array `nums`, return the smallest positive integer that is not present in `nums`.

Examples:
- `nums = [1,2,0]` -> `3`
- `nums = [3,4,-1,1]` -> `2`
- `nums = [7,8,9,11,12]` -> `1`

## Solution Overview

| Metric / Feature | Sorting Approach (`Problem41-1.java`) | Boolean Presence Array (`Problem41-2.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written |
| **Algorithm** | Sort array in ascending order and iteratively match positive integers | Mark presence of numbers in `[1, N]` using a boolean array |
| **Time Complexity** | $O(N \log N)$ | $O(N)$ |
| **Space Complexity** | $O(1)$ auxiliary (ignoring sort overhead) | $O(N)$ auxiliary space |
| **Pros & Cons** | Simple & intuitive, but $O(N \log N)$ sorting time | Linear $O(N)$ time complexity, trades $O(N)$ auxiliary memory |

> **Note**: All source file documentations were generated using LLM / AI. Both implementations represent human-written solutions.
