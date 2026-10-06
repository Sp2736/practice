# LeetCode Problem 125: Valid Palindrome

## Problem Description
A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a palindrome, or* `false` *otherwise*.

Examples:
- `s = "A man, a plan, a canal: Panama"` -> `true` (`"amanaplanacanalpanama"` is a palindrome)
- `s = "race a car"` -> `false` (`"raceacar"` is not a palindrome)
- `s = " "` -> `true` (`""` is an empty string after removing non-alphanumeric characters, which is a palindrome)

## Solution Comparison

| Metric / Feature | Human Approach (`Problem125.java`) | Optimized Two-Pointer Approach (`Problem125Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Regex replacement `replaceAll("[^a-zA-Z0-9]", "")` & `StringBuilder.reverse()` | In-place two-pointer scan with `Character.isLetterOrDigit()` |
| **Time Complexity** | $O(N)$ where $N$ is string length | $O(N)$ single pass |
| **Space Complexity** | $O(N)$ memory for new filtered and reversed strings | $O(1)$ constant auxiliary memory |
| **Pros & Cons** | Clean and concise; higher overhead due to regex engine and string allocations | Optimal efficiency; zero memory overhead and early termination on mismatch |

> **Note**: All source file documentations were generated using LLM / AI.
