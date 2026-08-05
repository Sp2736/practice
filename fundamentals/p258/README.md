# LeetCode Problem 258: Add Digits

## Problem Description
Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

## Solution Comparison

| Metric / Feature | Human Approach (`problem-258.cpp`) | Optimized AI-assisted Approach (`problem-258-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Iterative digit summation loops | Digital Root / Congruence Formula (`1 + (num - 1) % 9`) |
| **Time Complexity** | $O(\log_{10}(N))$ | $O(1)$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(1)$ auxiliary |
| **Pros & Cons** | Easy to understand, but requires multiple loop cycles | Extremely fast, constant time, but requires mathematical background |

> **Note**: All source file documentations were generated using LLM / AI.
