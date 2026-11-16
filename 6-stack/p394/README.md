# LeetCode Problem 394: Decode String

## Problem Description
Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there will not be input like `3a` or `2[4]`.

Examples:
- `s = "3[a]2[bc]"` -> `"aaabcbc"`
- `s = "3[a2[c]]"` -> `"accaccacc"`
- `s = "2[abc]3[cd]ef"` -> `"abcabccdcdcdef"`

## Solution Comparison

| Metric / Feature | Stack of Pairs Approach (`Problem394.cpp`) |
| :--- | :--- |
| **Origin** | Human Written logic |
| **Data Structure** | `std::stack<std::pair<int, std::string>>` tracking `{repeat_count, prev_string}` |
| **Algorithm** | Single-pass scanner storing outer string state and count upon `'['`, decoding and appending to previous context upon `']'`, and accumulating multi-digit numbers and plain characters |
| **Time Complexity** | $O(\text{MaxK} \times N)$ where $N$ is string length and $\text{MaxK}$ is maximum repeat factor |
| **Space Complexity** | $O(N + M)$ where $M$ is length of the decoded string (stack depth bounded by nesting depth) |
| **Pros & Cons** | Elegant handling of arbitrary bracket nesting; pairing count with prefix string eliminates synchronization between dual stacks |

> **Note**: All source file documentations were generated using LLM / AI.
