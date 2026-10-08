# LeetCode Problem 1672: Richest Customer Wealth

## Problem Description
You are given an `m x n` 2D integer grid `accounts` where `accounts[i][j]` is the amount of money the `i-th` customer has in the `j-th` bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Examples:
- `accounts = [[1,2,3],[3,2,1]]` -> `6` (Both customers have wealth 6)
- `accounts = [[1,5],[7,3],[3,5]]` -> `10` (2nd customer has wealth 7 + 3 = 10)
- `accounts = [[2,8,7],[7,1,3],[1,9,5]]` -> `17` (1st customer has wealth 2 + 8 + 7 = 17)

## Solution Overview

| Metric / Feature | Human Approach (`Problem1672.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Row-by-row sum accumulation tracking the global maximum |
| **Time Complexity** | $O(M \times N)$ where $M$ is the number of customers and $N$ is the number of banks |
| **Space Complexity** | $O(1)$ constant auxiliary space |
| **Notes** | No separate optimized file is needed as scanning each cell once is already asymptotically optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
