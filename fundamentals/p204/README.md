# LeetCode Problem 204: Count Primes

## Problem Description
Given an integer `n`, return the number of prime numbers strictly less than `n`.

## Why Trial Division Causes TLE

In `problem-204.cpp`, trial division checks primality for every number `i` individually up to $\sqrt{i}$:
- Total operations grow as $\sum_{i=2}^{N} \sqrt{i} \approx O(N \sqrt{N})$.
- For $N = 5,000,000$, $N \sqrt{N} \approx 5,000,000 \times 2,236 \approx 1.1 \times 10^{10}$ operations, exceeding LeetCode's ~1 second time limit ($10^8$ operations max).

## The Optimal Solution: Sieve of Eratosthenes (`problem-204-opt.cpp`)

Instead of checking each number independently, the **Sieve of Eratosthenes** marks non-prime numbers in bulk:

1. Maintain a boolean array `isPrime` of size $N$, initially filled with `true`.
2. Set `isPrime[0] = isPrime[1] = false`.
3. For each prime $i$ from $2$ up to $\sqrt{N}$:
   - Mark all multiples $i \times i, i \times i + i, i \times i + 2i, \dots$ as `false`.
4. Count the number of `true` values remaining.

By starting non-prime markings at $i^2$, we avoid redundant work (e.g., when $i = 5$, $5 \times 2, 5 \times 3, 5 \times 4$ were already marked by primes 2 and 3).

## Solution Comparison

| Metric / Feature | Trial Division (`problem-204.cpp`) | Sieve of Eratosthenes (`problem-204-opt.cpp`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Nested loops testing divisibility for each $i$ up to $\sqrt{i}$ | Sieve of Eratosthenes marking composite numbers |
| **Time Complexity** | $O(N \sqrt{N})$ — **TLE** | $O(N \log (\log N))$ — **Passes in ~15ms** |
| **Space Complexity** | $O(1)$ auxiliary | $O(N)$ auxiliary (`vector<bool>`) |
| **Pros & Cons** | Low memory, but fails on large inputs | High performance, uses $O(N)$ memory bits |

> **Note**: All source file documentations were generated using LLM / AI.
