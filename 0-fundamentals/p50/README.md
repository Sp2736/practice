# LeetCode Problem 50: Pow(x, n)

## Problem Description
Implement `pow(x, n)`, which calculates `x` raised to the power `n` ($x^n$).

Examples:
- `x = 2.00000`, `n = 10` -> `1024.00000`
- `x = 2.10000`, `n = 3` -> `9.26100`
- `x = 2.00000`, `n = -2` -> `0.25000`

## Solution Overview

| Metric / Feature | Human Approach (`problem-50.cpp`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Iterative Binary Exponentiation (Repeated Squaring) with `long long` overflow handling for `INT_MIN` |
| **Time Complexity** | $O(\log N)$ |
| **Space Complexity** | $O(1)$ auxiliary space |
| **Notes** | No separate `*-opt.cpp` file is required as binary exponentiation achieves the optimal $O(\log N)$ time and $O(1)$ space complexity. |

> **Note**: All source file documentations were generated using LLM / AI.
