# LeetCode Problem 13: Roman to Integer

## Problem Description
Given a roman numeral, convert it to an integer.

Roman numerals are represented by seven different symbols: `I` (1), `V` (5), `X` (10), `L` (50), `C` (100), `D` (500), and `M` (1000).

Subtractive rules apply when a smaller symbol precedes a larger one:
- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9. 
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90. 
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

## Solution Comparison

| Metric / Feature | Human Approach 1 (`problem-13-1.cpp`) | Human Approach 2 (`problem-13-2.cpp`) | Optimized Approach (`problem-13-opt.cpp.exe`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Flag-based subtraction tracking during string traversal | Switch-based symbol evaluation comparing current vs next character | `unordered_map` lookup comparing current vs next character |
| **Time Complexity** | $O(N)$ | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(1)$ auxiliary | $O(1)$ auxiliary |
| **Pros & Cons** | Verbose flag management, checks dual-char patterns | Clean function abstraction with `switch`, fast lookups | Concise data structure mapping using `std::unordered_map` |

> **Note**: All source file documentations were generated using LLM / AI.
