# LeetCode Problem 844: Backspace String Compare

## Problem Description
Given two strings `s` and `t`, return `true` if they are equal when both are typed into empty text editors. `'#'` means a backspace character.

Note that after backspacing an empty text, the text will continue to be empty.

Examples:
- `s = "ab#c", t = "ad#c"` -> `true` (Explanation: Both `s` and `t` become `"ac"`.)
- `s = "ab##", t = "c#d#"` -> `true` (Explanation: Both `s` and `t` become `""`.)
- `s = "a#c", t = "b"` -> `false` (Explanation: `s` becomes `"c"` while `t` becomes `"b"`.)

## Solution Comparison

| Metric / Feature | Explicit Stack Approach (`Problem844.cpp`) | Reverse Two-Pointer Scan (`Problem844Opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic |
| **Algorithm** | Simulates typing into two `std::stack<char>` containers; pushes regular characters and pops on `'#'`, then compares stacks with `st1 == st2` | Iterates backwards with pointers `i` and `j`, tracking backspace skip counts `skipS` and `skipT` to find the next active character in each string and comparing them on the fly |
| **Time Complexity** | $O(M + N)$ where $M = |s|$ and $N = |t|$ | $O(M + N)$ where $M = |s|$ and $N = |t|$ |
| **Space Complexity** | $O(M + N)$ auxiliary space for two stacks | $O(1)$ auxiliary space |
| **Pros & Cons** | Intuitive and clean simulation of backspace editing; allocates memory for two stack structures | Follows optimal follow-up constraint of $O(1)$ space; avoids container allocations entirely, though pointer/skip state management requires careful boundary handling |

> **Note**: All source file documentations were generated using LLM / AI.
