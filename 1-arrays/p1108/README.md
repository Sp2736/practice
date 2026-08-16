# LeetCode Problem 1108: Defanging an IP Address

## Problem Description
Given a valid (IPv4) IP `address`, return a defanged version of that IP address. A defanged IP address replaces every period `"."` with `"[.]"`.

Examples:
- `address = "1.1.1.1"` -> `"1[.]1[.]1[.]1"`
- `address = "255.100.50.0"` -> `"255[.]100[.]50[.]0"`

## Solution Overview

| Metric / Feature | Human Approach (`Problem1108.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | String pattern replacement (`address.replace(".", "[.]")`) |
| **Time Complexity** | $O(N)$ where $N$ is the length of `address` |
| **Space Complexity** | $O(N)$ auxiliary space for output string |
| **Notes** | No separate `Problem1108Opt.java` file is required as built-in pattern substitution is already optimal. |

> **Note**: All source file documentations were generated using LLM / AI.
