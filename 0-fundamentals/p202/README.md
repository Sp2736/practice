# LeetCode Problem 202: Happy Number

## Problem Description
Write an algorithm to determine if a number `n` is happy.
A happy number is defined by replacing the number by the sum of the squares of its digits, repeating until the number equals 1 (or loops endlessly in a cycle which does not include 1). Those numbers for which this process ends in 1 are happy.

Examples:
- `n = 19` -> `true` ($1^2 + 9^2 = 82 \rightarrow 8^2 + 2^2 = 68 \rightarrow 6^2 + 8^2 = 100 \rightarrow 1^2 + 0^2 + 0^2 = 1$)
- `n = 2` -> `false`

## Solution Comparison

| Metric / Feature | Human Approach (`problem-202.cpp`) | Optimized Space Approach (`problem-202-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Hash set cycle detection (`std::unordered_set`) | Floyd's Tortoise and Hare cycle detection (`slow` & `fast` pointers) |
| **Time Complexity** | $O(\log N)$ | $O(\log N)$ |
| **Space Complexity** | $O(\log N)$ (stores visited numbers) | $O(1)$ auxiliary space |
| **Pros & Cons** | Faster per-step execution, but uses extra memory for the hash set | Compromises slightly on computation time (computes `getNext` twice per iteration) to achieve optimal $O(1)$ space efficiency |

> **Note**: All source file documentations were generated using LLM / AI.
