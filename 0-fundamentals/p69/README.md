# LeetCode Problem 69: Sqrt(x)

## Problem Description
Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer. The returned integer should be non-negative as well. Do not use any built-in exponent function or operator (such as `pow(x, 0.5)` or `x ** 0.5`).

Examples:
- `x = 4` -> `2`
- `x = 8` -> `2` (since $\sqrt{8} \approx 2.82842...$, floor is 2)

## Solution Overview

| Metric / Feature | Newton-Raphson Method (`problem-69-1.cpp`) | Binary Search Method (`problem-69-2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written (Newton's Method) | Human Written (Binary Search) |
| **Algorithm** | Iterative formula `guess = (guess + x / guess) / 2` | Search range `[1, x/2]` using binary search |
| **Time Complexity** | $O(\log N)$ (Quadratic convergence) | $O(\log N)$ |
| **Space Complexity** | $O(1)$ | $O(1)$ |
| **Pros & Cons** | Extremely fast convergence in practice | Clear invariant boundaries and straightforward range division |

> **Note**: All source file documentations were generated using LLM / AI.
