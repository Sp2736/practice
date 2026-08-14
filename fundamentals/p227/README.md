# LeetCode Problem 227: Basic Calculator II

## Problem Description
Given a string `s` which represents an expression containing integers and operators (`+`, `-`, `*`, `/`), evaluate this expression and return its value. The integer division should truncate toward zero.

Examples:
- `s = "3+2*2"` -> `7`
- `s = " 3/2 "` -> `1`
- `s = " 3+5 / 2 "` -> `5`

## Solution Comparison

| Metric / Feature | Educational Infix-Postfix (`problem-227-extra.cpp`) | Human Stack Approach (`problem-227.cpp`) | Optimized Space Approach (`problem-227-opt.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written (Educational) | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Infix to Postfix conversion followed by Postfix evaluation using stack | Single pass using `std::stack` for operator precedence handling | Single pass tracking running answer `ans` & previous term `prev` |
| **Time Complexity** | $O(N)$ (Two passes) | $O(N)$ (One pass) | $O(N)$ (One pass) |
| **Space Complexity** | $O(N)$ (Vector + Stack space) | $O(N)$ (Stack space) | $O(1)$ auxiliary space |
| **Pros & Cons** | Clear conceptual demonstration of compiler arithmetic parsing; high memory overhead | Practical stack evaluation logic; easy to follow | Optimal performance; eliminates stack allocation entirely |

> **Note**: All source file documentations were generated using LLM / AI.
