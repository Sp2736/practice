# LeetCode Problem 168: Excel Sheet Column Title

## Problem Description
Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.

Examples:
- 1 -> `A`
- 2 -> `B`
- 26 -> `Z`
- 27 -> `AA`
- 28 -> `AB`
- 701 -> `ZY`

## Solution Overview

| Metric / Feature | Human Approach (`problem-168.cpp`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | 1-adjusted Base-26 Conversion (`columnNumber--`, append `'A' + columnNumber % 26`, reverse string) |
| **Time Complexity** | $O(\log_{26}(N))$ where $N$ is `columnNumber` |
| **Space Complexity** | $O(1)$ auxiliary space |
| **Notes** | No separate `*-opt.cpp` file is required as this implementation is already optimal in time and space complexity. |

> **Note**: All source file documentations were generated using LLM / AI.
