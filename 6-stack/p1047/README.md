# LeetCode Problem 1047: Remove All Adjacent Duplicates In String

## Problem Description
You are given a string `s` consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on `s` until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Examples:
- `s = "abbaca"` -> `"ca"` (Explanation: `"abbaca"` -> `"aaca"` -> `"ca"`)
- `s = "azxxzy"` -> `"ay"` (Explanation: `"azxxzy"` -> `"azzy"` -> `"ay"`)

## Solution Comparison

| Metric / Feature | Explicit Stack Approach (`Problem1047_1.cpp`) | String As Stack (`Problem1047_2.cpp`) | In-Place Two-Pointer (`Problem1047Opt.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic | Written with help from AI |
| **Algorithm** | Maintains a `std::stack<char>`, pops adjacent duplicates, copies elements into a string, and reverses it | Treats `std::string` directly as a stack using `back()`, `pop_back()`, and `push_back()` | Uses input string `s` as its own stack buffer with write pointer `k`, resizing to `k` at the end |
| **Time Complexity** | $O(N)$ (traversal + stack drain + reverse) | $O(N)$ (strictly single pass) | $O(N)$ (single pass overwrite) |
| **Space Complexity** | $O(N)$ stack memory + $O(N)$ output string | $O(N)$ output string | $O(1)$ constant auxiliary space (in-place) |
| **Pros & Cons** | Classical stack demonstration, but requires intermediate buffer and post-reversal | High-performance and clean; no extra container conversions or post-reversal | Optimal space efficiency; zero extra heap allocations by directly repurposing the input buffer |

> **Note**: All source file documentations were generated using LLM / AI.
