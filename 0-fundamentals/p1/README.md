# LeetCode Problem 1: Two Sum

## Problem Description
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`. You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Solution Comparison

| Metric / Feature | Human Approach (`problem-1.cpp`) | Optimized AI-assisted Approach (`problem-1-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Brute-force double nested loop | Single-pass Hash Map (`std::unordered_map`) |
| **Time Complexity** | $O(N^2)$ | $O(N)$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(N)$ auxiliary |
| **Pros & Cons** | Simple & intuitive, but slow for large inputs | Faster lookup, trades extra space for linear execution time |

> **Note**: All source file documentations were generated using LLM / AI.
