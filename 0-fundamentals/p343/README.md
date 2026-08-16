# LeetCode Problem 343: Integer Break

## Problem Description
Given an integer `n`, break it into the sum of `k` positive integers (`k >= 2`) such that the product of those integers is maximized. Return the maximum product you can get.

Examples:
- `n = 2` -> `1` ($1 + 1 = 2$, $1 \times 1 = 1$)
- `n = 10` -> `36` ($3 + 3 + 4 = 10$, $3 \times 3 \times 4 = 36$)

## Solution Overview

| Metric / Feature | Modulo Pattern Approach (`problem-343-1.cpp`) | Concise Greedy Loop (`problem-343-2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written |
| **Algorithm** | Explicit pattern matching based on `n % 3` (0 -> 3s only, 1 -> 4 + 3s, 2 -> 2 + 3s) | Subtract 3 while `n > 4`, then multiply remaining `n` |
| **Time Complexity** | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(1)$ | $O(1)$ |
| **Pros & Cons** | Explicitly spells out mathematical cases | Shorter, cleaner implementation using stopping condition `n > 4` |

> **Note**: All source file documentations were generated using LLM / AI. Both implementations represent human-written solutions as the greedy factor-3 property is mathematically optimal.
