# LeetCode Problem 771: Jewels and Stones

## Problem Description
You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have. Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.

Examples:
- `jewels = "aA", stones = "aAAbbbb"` -> `3`
- `jewels = "z", stones = "ZZ"` -> `0`

## Solution Comparison

| Metric / Feature | Human Brute Force (`Problem771_1.java`) | Human HashSet (`Problem771_2.java`) | Optimized ASCII Array (`Problem771Opt.java`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Nested loop checking each stone against all jewels | `HashSet<Character>` lookup for constant-time membership | Direct-access `boolean[128]` ASCII lookup table |
| **Time Complexity** | $O(N \times M)$ | $O(N + M)$ | $O(N + M)$ |
| **Space Complexity** | $O(1)$ auxiliary space | $O(M)$ auxiliary space (HashSet storage) | $O(1)$ auxiliary space (fixed 128-element boolean array) |
| **Pros & Cons** | No extra memory; quadratic runtime | Linear runtime; memory overhead and boxing/unboxing with `Character` | Fastest execution, zero hashing/boxing overhead, constant bounded space |

> **Note**: All source file documentations were generated using LLM / AI.
