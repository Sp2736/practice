# LeetCode Problem 242: Valid Anagram

## Problem Description
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Examples:
- `s = "anagram", t = "nagaram"` -> `true`
- `s = "rat", t = "car"` -> `false`

## Solution Overview

| Metric / Feature | Frequency Counter Array (`Problem242.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Solution) |
| **Algorithm** | Fixed-size 26-element array counting characters (+1 for `s`, -1 for `t`) and checking for zero balance |
| **Time Complexity** | $O(N)$ where $N$ is the length of strings |
| **Space Complexity** | $O(1)$ auxiliary space ($26$ integers) |
| **Notes** | The frequency counter provides optimal $O(N)$ time and $O(1)$ auxiliary space without heap allocations or sorting overhead ($O(N \log N)$). Therefore, no separate AI-optimized file is required. |

> **Note**: All source file documentations were generated using LLM / AI.
