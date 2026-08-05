# LeetCode Problem 342: Power of Four

## Problem Description
Given an integer `n`, return `true` if it is a power of four. Otherwise, return `false`.

An integer `n` is a power of four if there exists an integer `x` such that `n == 4^x`.

## Solution Details

### Bitwise & Math Approach (`problem-342.cpp`)

- **Origin**: Human Written.
- **Algorithm**: Bitwise power of two check (`x & (x - 1) == 0`) combined with modulo check (`(x - 1) % 3 == 0`).
- **Time Complexity**: $O(1)$ - Evaluated using constant-time arithmetic and bitwise operations.
- **Space Complexity**: $O(1)$ auxiliary - No dynamic allocations.
- **Pros & Cons**: Extremely fast and efficient, avoiding loops/recursion, but requires understanding of mathematical and bitwise properties.

> **Note**: All source file documentations were generated using LLM / AI.
