# LeetCode Problem 27: Remove Element

## Problem Description
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:
- Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`.
- The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

Examples:
- `nums = [3, 2, 2, 3], val = 3` -> `k = 2`, `nums = [2, 2, _, _]`
- `nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2` -> `k = 5`, `nums = [0, 1, 3, 0, 4, _, _, _]`

## Solution Overview

| Metric / Feature | Two-Pointer In-Place Overwrite (`Problem27.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Single pass with write pointer `k` overwriting non-target elements |
| **Time Complexity** | $O(N)$ where $N$ is the number of elements in `nums` |
| **Space Complexity** | $O(1)$ constant auxiliary memory (in-place) |
| **Notes** | No separate `Opt` file is needed as linear scan with in-place overwrite is already optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
