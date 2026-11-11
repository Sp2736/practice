# LeetCode Problem 20: Valid Parentheses

## Problem Description
Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

Examples:
- `s = "()"` -> `true`
- `s = "()[]{}"` -> `true`
- `s = "(]"` -> `false`
- `s = "([])"` -> `true`

## Solution Comparison

| Metric / Feature | Explicit Stack Matching (`Problem20_1.cpp`) | Expected Closing Stack (`Problem20_2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic |
| **Algorithm** | Pushes opening brackets onto stack; validates compound `brackets.top() == open && s[i] == close` conditions upon closing | Pushes expected *closing* bracket onto stack; validates closing brackets with a concise `st.top() == c` check; includes odd-length early exit |
| **Time Complexity** | $O(N)$ | $O(N)$ (with immediate $O(1)$ rejection for odd lengths) |
| **Space Complexity** | $O(N)$ stack memory | $O(N)$ stack memory (up to $N/2$ for balanced cases) |
| **Pros & Cons** | Explicit and readable condition mapping | Cleaner matching logic, avoids verbose compound comparisons, fast fail on odd lengths |

> **Note**: All source file documentations were generated using LLM / AI.

