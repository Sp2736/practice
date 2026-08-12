# LeetCode Problem 12: Integer to Roman

## Problem Description
Seven different symbols represent Roman numerals: `I` (1), `V` (5), `X` (10), `L` (50), `C` (100), `D` (500), and `M` (1000). 
Given an integer `num` between 1 and 3999, convert it to a Roman numeral representation. Subtractive rules apply for values starting with 4 or 9 (`IV`, `IX`, `XL`, `XC`, `CD`, `CM`).

## Solution Comparison

| Metric / Feature | Human Approach (`problem-12.cpp`) | Optimized Greedy Lookup (`problem-12-1-opt.cpp`) | Positional Digit Mapping (`problem-12-2-opt.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | AI-Assisted | AI-Assisted |
| **Algorithm** | Explicit `if-else if` checks for 13 subtractive thresholds | Iterative greedy subtraction using parallel lookup vectors | Direct indexing using place-value lookup arrays (`M`, `C`, `X`, `I`) |
| **Time Complexity** | $O(1)$ | $O(1)$ | $O(1)$ |
| **Space Complexity** | $O(1)$ | $O(1)$ | $O(1)$ |
| **Pros & Cons** | Verbose with many conditional branches, but straightforward logic | Clean, concise loop; easy to maintain | Fast single-line expression, but precomputed tables take static storage |

> **Note**: All source file documentations were generated using LLM / AI.
