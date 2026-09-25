# LeetCode Problem 29: Divide Two Integers

## Problem Description
Given two integers `dividend` and `divisor`, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, `8.345` would be truncated to `8`, and `-2.7335` would be truncated to `-2`.

Return the quotient after dividing `dividend` by `divisor`.

**Note:** Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: $[−2^{31}, 2^{31} − 1]$. For this problem, if the quotient is strictly greater than $2^{31} - 1$, then return $2^{31} - 1$, and if the quotient is strictly less than $-2^{31}$, then return $-2^{31}$.

Examples:
- `dividend = 10, divisor = 3` -> `3`
- `dividend = 7, divisor = -3` -> `-2`

## Solution Overview

| Metric / Feature | Foundational Conceptual Approach (Commented in file) | Exponential Doubling Approach (`Problem29.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written (Intuitive Basis) | Human Written (Optimal Implementation) |
| **Algorithm** | Linear subtraction (`dividend - divisor`) with sign tracking | Repeated exponential doubling (`current += current`, `multiple += multiple`) |
| **Time Complexity** | $O(\text{dividend})$ (TLE on large numbers) | $O(\log^2(\text{dividend}))$ / $O(32)$ |
| **Space Complexity** | $O(1)$ auxiliary space | $O(1)$ auxiliary space |
| **Notes** | Serves as the foundational conceptual model for understanding division as repeated subtraction. | Optimally accelerates subtraction into logarithmic doubling steps; handles `Integer.MIN_VALUE / -1` overflow and bitwise XOR sign calculation. |

> **Note**: All source file documentations were generated using LLM / AI.
