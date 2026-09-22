# LeetCode Problem 709: To Lower Case

## Problem Description
Given a string `s`, return the string after replacing every uppercase letter with the same lowercase letter.

Examples:
- `s = "Hello"` -> `"hello"`
- `s = "here"` -> `"here"`
- `s = "LOVELY"` -> `"lovely"`

## Solution Overview

| Metric / Feature | Human Approach (`Problem709.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | ASCII character offset shift (`c += 32` for `'A' <= c <= 'Z'`) |
| **Time Complexity** | $O(N)$ where $N$ is the length of string `s` |
| **Space Complexity** | $O(N)$ auxiliary space for character array transformation |
| **Notes** | No separate `Problem709Opt.java` file is required as single-pass ASCII shifting is optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
