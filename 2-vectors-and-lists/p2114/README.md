# LeetCode Problem 2114: Maximum Number of Words Found in Sentences

## Problem Description
A **sentence** is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings `sentences`, where each `sentences[i]` represents a single sentence.

Return the *maximum number of words that appear in a single sentence*.

Examples:
- `sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]` -> `6`
- `sentences = ["please wait", "continue to fight", "continue to win"]` -> `3`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem2114.java`) | Optimized In-Place Scan (`Problem2114Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | String split on whitespace (`sentence.split(" ")`) and measuring array length | Direct character scan counting space occurrences (`count = 1 + spaces`) |
| **Time Complexity** | $O(N \times L)$ where $N$ is sentence count and $L$ is sentence length | $O(N \times L)$ single pass |
| **Space Complexity** | $O(W)$ auxiliary memory per sentence to allocate words array | $O(1)$ constant auxiliary space |
| **Pros & Cons** | Concise and readable; incurs overhead of regex splitting and string allocations | Optimal runtime; zero heap memory allocations and avoids regex engine overhead |

> **Note**: All source file documentations were generated using LLM / AI.
