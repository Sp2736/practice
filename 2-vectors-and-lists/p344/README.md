# LeetCode Problem 344: Reverse String

## Problem Description
Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with $O(1)$ extra memory.

Examples:
- `s = ["h","e","l","l","o"]` -> `["o","l","l","e","h"]`
- `s = ["H","a","n","n","a","h"]` -> `["h","a","n","n","a","H"]`

## Solution Comparison

| Metric / Feature | Manual Temporary Variable Swap (`Problem344_1.cpp`) | Standard Library Swap (`Problem344_2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic |
| **Algorithm** | Two-pointer converging swap using an explicit local `char temp` variable | Two-pointer converging swap using STL `std::swap(s[l], s[r])` |
| **Time Complexity** | $O(N)$ ($\lfloor N / 2 \rfloor$ swap operations) | $O(N)$ ($\lfloor N / 2 \rfloor$ swap operations) |
| **Space Complexity** | $O(1)$ constant auxiliary space (in-place) | $O(1)$ constant auxiliary space (in-place) |
| **Pros & Cons** | Elementary and language-agnostic logic with explicit temporary variable handling | Idiomatic modern C++ using standard library utility `std::swap` |

> **Note**: All source file documentations were generated using LLM / AI.
