# LeetCode Problem 151: Reverse Words in a String

## Problem Description
Given an input string `s`, reverse the order of the **words**.

A **word** is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.

Return *a string of the words in reverse order concatenated by a single space*.

Note that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Examples:
- `s = "the sky is blue"` -> `"blue is sky the"`
- `s = "  hello world  "` -> `"world hello"`
- `s = "a good   example"` -> `"example good a"`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem151.java`) | Optimized Backward Scan (`Problem151Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Regex splitting on whitespace `split("\\s+")` followed by reverse concatenation | Backward two-pointer scan with direct slice appending |
| **Time Complexity** | $O(N)$ where $N$ is string length | $O(N)$ linear single pass |
| **Space Complexity** | $O(N)$ memory for regex array and StringBuilder | $O(N)$ auxiliary output memory only (no intermediate arrays) |
| **Pros & Cons** | Simple and readable; extra memory/overhead for regex parsing and string array | High performance; avoids regex engine overhead and excessive string allocations |

> **Note**: All source file documentations were generated using LLM / AI.
