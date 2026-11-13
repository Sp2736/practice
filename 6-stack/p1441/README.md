# LeetCode Problem 1441: Build an Array With Stack Operations

## Problem Description
You are given an integer array `target` and an integer `n`.

You have an empty stack with the two following operations:
- `"Push"`: pushes an integer onto the top of the stack.
- `"Pop"`: removes the integer on the top of the stack.

You also have a stream of the integers in the range `[1, n]`.

Use the counter `i` from `1` to `n` to read integers from the stream:
- If the stack target is reached, stop reading.
- If the target array already matches the elements in the stack, return the sequence of operations used to build it.
- If the target is not reached yet and the stream is not empty, read the next integer and decide whether to keep or discard it using `"Push"` and `"Pop"`.

Examples:
- `target = [1,3], n = 3` -> `["Push","Push","Pop","Push"]`
- `target = [1,2,3], n = 3` -> `["Push","Push","Push"]`
- `target = [1,2], n = 4` -> `["Push","Push"]`

## Solution Comparison

| Metric / Feature | Stream Simulation (`Problem1441.cpp`) |
| :--- | :--- |
| **Origin** | Human Written logic |
| **Algorithm** | Simulates stream numbers `i` from `1` to `n`, pushing each number, checking match with `target[j]`, popping if mismatch, and terminating early when all `target` items are satisfied |
| **Time Complexity** | $O(M)$ where $M = \text{target.back()}$ ($\le n$) |
| **Space Complexity** | $O(M)$ space for storing result operation strings |
| **Pros & Cons** | Optimal single-pass simulation with early break as soon as `target` elements are exhausted |

> **Note**: All source file documentations were generated using LLM / AI.
