# LeetCode Problem 263: Ugly Number

## Problem Description
An **ugly number** is a positive integer whose prime factors are limited to `2`, `3`, and `5`.
Given an integer `n`, return `true` if `n` is an ugly number.

Examples:
- `n = 6` -> `true` ($6 = 2 \times 3$)
- `n = 1` -> `true` (1 has no prime factors, conventionally considered an ugly number)
- `n = 14` -> `false` ($14 = 2 \times 7$, contains prime factor 7)

## Solution & Learning Insight

| Metric / Feature | Human Approach (`problem-263.cpp`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Prime Factorization Reduction (repeatedly divide out factors 2, 3, and 5) |
| **Time Complexity** | $O(\log N)$ |
| **Space Complexity** | $O(1)$ auxiliary space |
| **Key Insight** | *"I learnt here that sometimes complex questions require basic mathematics. This problem is simply solved using prime factorization, as one would do on paper!!"* |

> **Note**: All source file documentations were generated using LLM / AI. No separate `*-opt.cpp` file is needed as prime factor reduction is already optimal.
