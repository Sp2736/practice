# LeetCode Problem 2011: Final Value of Variable After Performing Operations

## Problem Description
There is a programming language with only four operations and one variable `X`:
- `++X` and `X++` increments the value of the variable `X` by `1`.
- `--X` and `X--` decrements the value of the variable `X` by `1`.

Initially, the value of `X` is `0`.

Given an array of strings `operations` containing a list of operations, return the *final value of* `X` *after performing all the operations*.

Examples:
- `operations = ["--X", "X++", "X++"]` -> `1`
- `operations = ["++X", "++X", "X++"]` -> `3`
- `operations = ["X++", "++X", "--X", "X--"]` -> `0`

## Solution Overview

| Metric / Feature | Middle Character Inspection (`Problem2011.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Human Solution) |
| **Algorithm** | Inspects middle character `op.charAt(1)` to distinguish `+` from `-` in $O(1)$ per operation |
| **Time Complexity** | $O(N)$ where $N$ is the number of operations |
| **Space Complexity** | $O(1)$ constant auxiliary space |
| **Notes** | No separate AI-optimized solution is needed as checking `charAt(1)` provides optimal $O(N)$ time and $O(1)$ space without extra allocations. |

> **Note**: All source file documentations were generated using LLM / AI.
