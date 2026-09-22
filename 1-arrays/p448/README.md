# LeetCode Problem 448: Find All Numbers Disappeared in an Array

## Problem Description
Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all the integers in the range `[1, n]` that do not appear in `nums`.
You must write an algorithm that runs in $O(n)$ time and uses only $O(1)$ auxiliary space.

Examples:
- `nums = [4,3,2,7,8,2,3,1]` -> `[5,6]`
- `nums = [1,1]` -> `[2]`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem448.java`) | Optimized In-Place Negation (`Problem448Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | List pre-population & linear `contains`/`remove` search | In-place index negation marking (`nums[|x| - 1] = -nums[|x| - 1]`) |
| **Time Complexity** | $O(N^2)$ (due to array list search & removal) | $O(N)$ (two linear passes) |
| **Space Complexity** | $O(N)$ auxiliary space | $O(1)$ auxiliary space |
| **Pros & Cons** | Intuitive removal logic, but slow for large arrays | Optimal $O(N)$ time and $O(1)$ auxiliary space, satisfies constraints |

> **Note**: All source file documentations were generated using LLM / AI.
