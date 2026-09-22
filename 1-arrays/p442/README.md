# LeetCode Problem 442: Find All Duplicates in an Array

## Problem Description
Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in $O(n)$ time and uses only $O(1)$ auxiliary space.

Examples:
- `nums = [4,3,2,7,8,2,3,1]` -> `[2,3]`
- `nums = [1,1,2]` -> `[1]`
- `nums = [1]` -> `[]`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem442.java`) | Optimized In-Place Negation (`Problem442Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | HashSet insertion (`visited.add(x)`) | Index negation (`nums[|x| - 1] = -nums[|x| - 1]`) |
| **Time Complexity** | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(N)$ auxiliary space for HashSet | $O(1)$ auxiliary space |
| **Pros & Cons** | Simple & intuitive, but uses extra $O(N)$ space | Optimal $O(1)$ auxiliary space, satisfies problem constraint |

> **Note**: All source file documentations were generated using LLM / AI.
