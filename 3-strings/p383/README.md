# LeetCode Problem 383: Ransom Note

## Problem Description
Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

Examples:
- `ransomNote = "a", magazine = "b"` -> `false`
- `ransomNote = "aa", magazine = "ab"` -> `false`
- `ransomNote = "aa", magazine = "aab"` -> `true`

## Solution Comparison

| Metric / Feature | Fixed Frequency Array (`Problem383.cpp`) |
| :--- | :--- |
| **Origin** | Human Written logic |
| **Algorithm** | Length guard check followed by single-pass frequency counting on `magazine` with 26-element array, then decrementing and boundary checking (< 0) for each character in `ransomNote` |
| **Time Complexity** | $O(M + N)$ where $M = |\text{magazine}|$ and $N = |\text{ransomNote}|$ |
| **Space Complexity** | $O(1)$ constant auxiliary memory ($26 \times 4$ bytes) |
| **Pros & Cons** | Optimal time and space; fast array indexing without heap allocations or hash map overhead |

> **Note**: All source file documentations were generated using LLM / AI.
