# LeetCode Problem 205: Isomorphic Strings

## Problem Description
Given two strings `s` and `t`, determine if they are isomorphic.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Examples:
- `s = "egg", t = "add"` -> `true`
- `s = "foo", t = "bar"` -> `false`
- `s = "paper", t = "title"` -> `true`
- `s = "badc", t = "baba"` -> `false`

## Solution Comparison

| Metric / Feature | Dual Hash Maps (`Problem205_1.cpp`) | Last-Seen Index Array (`Problem205_2.cpp`) | Dual Direct Array Map (`Problem205_3.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic | Human Written logic |
| **Data Structure** | Two `std::unordered_map<char, char>` | Two raw integer arrays `int[256]` | Two `std::array<char, 256>` |
| **Algorithm** | Explicit bidirectional character mapping (`mapST` and `mapTS`) | Compares last-seen 1-based index of corresponding characters | Explicit bidirectional character substitution tracking in zero-initialized fixed arrays |
| **Time Complexity** | $O(N)$ (hash table lookups and inserts) | $O(N)$ (direct integer array indexing) | $O(N)$ (direct character array indexing) |
| **Space Complexity** | $O(K)$ where $K \le 256$ | $O(1)$ constant auxiliary memory ($2 \times 256 \times 4$ bytes) | $O(1)$ constant auxiliary memory ($2 \times 256$ bytes) |
| **Pros & Cons** | Intuitive and works for arbitrary character types, but has hash overhead and dynamic allocations | Very concise condition (`mapST[a] != mapTS[b]`), eliminates separate character checking | Minimal memory footprint (512 bytes total), cache-friendly, and optimal constant-time performance |

> **Note**: All source file documentations were generated using LLM / AI.
