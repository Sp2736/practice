# LeetCode Problem 14: Longest Common Prefix

## Problem Description
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

Examples:
- `strs = ["flower","flow","flight"]` -> `"fl"`
- `strs = ["dog","racecar","car"]` -> `""`

## Solution Comparison

| Metric / Feature | Incremental Prefix Building (`Problem14_1.java`) | Vertical Scanning (`Problem14_2.java`) | Horizontal Scanning / Shrinking (`Problem14_3.java`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | Human Written | Human Written |
| **Algorithm** | Incrementally builds prefix char-by-char from `strs[0]` and verifies each with `startsWith()` | Column-by-column character check across all strings at index `i` | Initializes prefix to `strs[0]`; trims trailing characters using `startsWith()` |
| **Time Complexity** | $O(S)$ where $S$ is sum of all characters | $O(S)$ with optimal early exit on mismatch | $O(S)$ where $S$ is sum of all characters |
| **Space Complexity** | $O(M)$ auxiliary string allocations | $O(1)$ auxiliary space (substring only) | $O(1)$ auxiliary space |
| **Pros & Cons** | Intuitive forward prefix growth; repeated string re-allocations | Highly cache-friendly and stops at the earliest mismatch point | Standard horizontal reduction; easy to understand shrinking logic |

> **Note**: All solutions represent valid $O(S)$ approaches exploring different algorithmic traversal orders; no separate `Opt` file is required. All source file documentations were generated using LLM / AI.
