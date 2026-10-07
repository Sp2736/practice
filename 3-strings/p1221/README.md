# LeetCode Problem 1221: Split a String in Balanced Strings

## Problem Description
**Balanced** strings are those that have an equal quantity of `'L'` and `'R'` characters.

Given a **balanced** string `s`, split it into some number of substrings such that:
- Each substring is balanced.

Return the *maximum number of balanced strings you can obtain*.

Examples:
- `s = "RLRRLLRLRL"` -> `4` (`"RL"`, `"RRLL"`, `"RL"`, `"RL"`)
- `s = "RLLLLRRRLR"` -> `3` (`"RL"`, `"LLLRRR"`, `"LR"`)
- `s = "LLLRRR"` -> `1` (`"LLLRRR"`)

## Solution Comparison

| Metric / Feature | Dual Counter Approach (`Problem1221_1.java`) | Single Balance Accumulator (`Problem1221_2.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written (Refined Logic) |
| **Algorithm** | Tracks separate counters for `r` and `l`; checks equality and resets | Tracks single `balance` variable (`+1` for `'R'`, `-1` for `'L'`); checks `balance == 0` |
| **Time Complexity** | $O(N)$ single pass | $O(N)$ single pass |
| **Space Complexity** | $O(1)$ auxiliary space | $O(1)$ auxiliary space |
| **Pros & Cons** | Explicit counter tracking; requires reset logic | Minimal state tracking, concise and optimal condition checks |

> **Note**: Both solutions represent optimal $O(N)$ time and $O(1)$ space approaches; no separate `Opt` file is required. All source file documentations were generated using LLM / AI.
