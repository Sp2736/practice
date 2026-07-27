# LeetCode Problem 7: Reverse Integer

## Problem Description
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned), or handle overflow using 64-bit integer buffers / explicit range checks.

## Solution Comparison

| Metric / Feature | Human Approach (`problem-7.cpp`) | Optimized AI-assisted Approach (`problem-7-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Flag-based sign tracking & digit extraction with skip logic | Direct digit extraction & clean sign restoration |
| **Time Complexity** | $O(\log_{10}(N))$ | $O(\log_{10}(N))$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(1)$ auxiliary |
| **Pros & Cons** | Explicit zero skipping logic | Cleaner code structure, concise variable naming |

> **Note**: All source file documentations were generated using LLM / AI.
