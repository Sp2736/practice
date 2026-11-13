# LeetCode Problem 155: Min Stack

## Problem Description
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:
- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element `val` onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

You must implement a solution with $O(1)$ time complexity for each function.

Examples:
```cpp
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
```

## Solution Comparison

| Metric / Feature | Two Parallel Vectors (`Problem155_1.cpp`) | Vector of Pairs (`Problem155_2.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic |
| **Data Structure** | Two separate vectors: `st` (elements) and `minStack` (prefix minimums) | A single vector of pairs: `stack<pair<int, int>>` holding `{val, current_min}` |
| **Time Complexity** | $O(1)$ for all operations | $O(1)$ for all operations |
| **Space Complexity** | $O(N)$ (two buffers of $N$ integers) | $O(N)$ (one buffer of $N$ pairs) |
| **Pros & Cons** | Intuitive and decoupled data structures, but requires double push/pop operations per call | Cleaner synchronization: a single push/pop modifies both the element and its historical minimum atomically |

> **Note**: All source file documentations were generated using LLM / AI.
