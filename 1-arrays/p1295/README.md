# LeetCode Problem 1295: Find Numbers with Even Number of Digits

## Problem Description
Given an array `nums` of integers, return how many of them contain an even number of digits.

Examples:
- `nums = [12, 345, 2, 6, 7896]` -> `2` (12 has 2 digits and 7896 has 4 digits)
- `nums = [555, 901, 482, 1771]` -> `1` (only 1771 has an even number of digits)

## Solution Comparison

| Metric / Feature | Human Approach (`Problem1295.java`) | Optimized Math Approach (`Problem1295Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Iterative division loop (`n /= 10`) | Direct logarithmic math calculation `(int) Math.log10(x) + 1` |
| **Time Complexity** | $O(N \times \log_{10}(M))$ where $M$ is max number | $O(N)$ (constant time digit calculation) |
| **Space Complexity** | $O(1)$ auxiliary space | $O(1)$ auxiliary space |
| **Pros & Cons** | Intuitive, standard digit-count loop | Eliminates loop overhead, direct arithmetic evaluation |

> **Note**: All source file documentations were generated using LLM / AI.
