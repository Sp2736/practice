# LeetCode Problem 1678: Goal Parser Interpretation

## Problem Description
You own a **Goal Parser** that can interpret a string `command`. The `command` consists of an alphabet of `"G"`, `"()"` and/or `"(al)"` in some order. The Goal Parser will interpret:
- `"G"` as the string `"G"`,
- `"()"` as the string `"o"`, and
- `"(al)"` as the string `"al"`.

The interpreted strings are then concatenated in the original order.

Given the string `command`, return the *Goal Parser's interpretation of* `command`.

Examples:
- `command = "G()(al)"` -> `"Goal"`
- `command = "G()()()()(al)"` -> `"Gooooal"`
- `command = "(al)G(al)()()G"` -> `"alGalooG"`

## Solution Comparison

| Metric / Feature | String Replacement (`Problem1678_1.java`) | Pointer & StringBuilder (`Problem1678_2.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written (Refined Logic) |
| **Algorithm** | Chained `replace()` calls for `"()"` and `"(al)"` | Single linear traversal with character inspection and `StringBuilder` |
| **Time Complexity** | $O(N)$ multiple passes | $O(N)$ single pass |
| **Space Complexity** | $O(N)$ intermediate string allocations | $O(N)$ output buffer only |
| **Pros & Cons** | Highly readable and concise; multiple passes and intermediate objects | Optimal single-pass traversal, zero intermediate substring overhead |

> **Note**: Both solutions represent optimal $O(N)$ time approaches; no separate `Opt` file is required. All source file documentations were generated using LLM / AI.
