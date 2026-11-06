# LeetCode Problem 977: Squares of a Sorted Array

## Problem Description
Given an integer array `nums` sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Examples:
- `nums = [-4,-1,0,3,10]` -> `[0,1,9,16,100]`
- `nums = [-7,-3,2,3,11]` -> `[4,9,9,49,121]`

## Solution Comparison

| Metric / Feature | Multiset Approach (`Problem977.cpp`) | Optimal Two-Pointer Approach (`Problem977Opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Developed after studying & taking hints from AI |
| **Algorithm** | Inserts all squared elements into `std::multiset` (self-balancing BST), then rewrites back to array | Two pointers (`left`, `right`) converging from extremes, filling the result array backwards from largest to smallest |
| **Time Complexity** | $O(N \log N)$ (due to multiset balanced-tree insertions) | $O(N)$ (single linear scan across the array) |
| **Space Complexity** | $O(N)$ auxiliary storage in multiset | $O(N)$ auxiliary output space ($O(1)$ extra space beyond output array) |
| **Pros & Cons** | Simple and intuitive set sorting, but higher time complexity and dynamic allocation overhead | Optimal $O(N)$ linear time complexity and cache-friendly contiguous vector writes |

> **Note**: All source file documentations were generated using LLM / AI.

