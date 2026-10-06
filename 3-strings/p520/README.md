# LeetCode Problem 520: Detect Capital

## Problem Description
We define the usage of capitals in a word to be right when one of the following cases holds:
1. All letters in this word are capitals, like `"USA"`.
2. All letters in this word are not capitals, like `"leetcode"`.
3. Only the first letter in this word is capital, like `"Google"`.

Given a string `word`, return `true` if the usage of capitals in it is right.

Examples:
- `word = "USA"` -> `true`
- `word = "FlaG"` -> `false`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem520.java`) | Optimized Traversal Approach (`Problem520Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Character array iteration (`toCharArray()`) with early flag tracking | Direct index traversal (`charAt(i)`) with count checks |
| **Time Complexity** | $O(N)$ where $N$ is the length of string `word` | $O(N)$ single pass |
| **Space Complexity** | $O(N)$ auxiliary space allocated for character array | $O(1)$ constant auxiliary space |
| **Pros & Cons** | Explicit first-letter check during loop; allocates char array | Avoids memory allocation overhead with clean combined checks |

> **Note**: All source file documentations were generated using LLM / AI.
