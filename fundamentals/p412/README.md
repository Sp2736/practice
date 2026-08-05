# LeetCode Problem 412: Fizz Buzz

## Problem Description
Given an integer `n`, return a string array `answer` (1-indexed) where:
- `answer[i] == "FizzBuzz"` if `i` is divisible by `3` and `5`.
- `answer[i] == "Fizz"` if `i` is divisible by `3`.
- `answer[i] == "Buzz"` if `i` is divisible by `5`.
- `answer[i] == i` (as a string) if none of the above conditions are true.

## Solution Details

### Standard Approach (`problem-412.cpp`)

- **Origin**: Human Written.
- **Algorithm**: Standard loops with conditional modulo `%` operations.
- **Time Complexity**: $O(N)$ - Loop runs exactly $N$ times.
- **Space Complexity**: $O(1)$ auxiliary - No extra memory besides the output array.
- **Pros & Cons**: Simple, standard, and highly intuitive approach.

> **Note**: All source file documentations were generated using LLM / AI.
