# LeetCode Problem 171: Excel Sheet Column Number

## Problem Description
Given a string `columnTitle` that represents the column title as appears in an Excel sheet, return its corresponding column number.

Examples:
- `A` -> 1
- `B` -> 2
- `Z` -> 26
- `AA` -> 27
- `AB` -> 28
- `ZY` -> 701

## Solution Overview

| Metric / Feature | Human Approach (`problem-171.cpp`) |
| :--- | :--- |
| **Origin** | Human Written (Already Optimal) |
| **Algorithm** | Base-26 Positional Value Accumulation (`result = result * 26 + (c - 'A' + 1)`) |
| **Time Complexity** | $O(N)$ where $N$ is the length of `columnTitle` |
| **Space Complexity** | $O(1)$ auxiliary space |
| **Notes** | No separate `*-opt.cpp` file is required as this implementation is already optimal in time and space complexity. |

> **Note**: All source file documentations were generated using LLM / AI.
