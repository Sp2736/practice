# LeetCode Problem 231: Power of Two

## Problem Description
Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that $n == 2^x$.

## Bit Manipulation Concept (`problem-231-opt.cpp`)

In binary representation, a number `n` is a power of two if and only if it has **exactly one set bit** (`1` bit).

- **Binary Representation of Powers of Two**:
  - $1_{10} = 0000\ 0001_2$
  - $2_{10} = 0000\ 0010_2$
  - $4_{10} = 0000\ 0100_2$
  - $8_{10} = 0000\ 1000_2$
  - $16_{10} = 0001\ 0000_2$

- **The `(n & (n - 1))` Trick**:
  When you subtract `1` from a power of 2, the single set bit turns into `0`, and all bits to its right become `1`.
  - For $n = 8\ (1000_2)$:
    $$n - 1 = 7\ (0111_2)$$
    $$n \ \& \ (n - 1) = 1000_2 \ \& \ 0111_2 = 0000_2 = 0$$

- If `n` is **not** a power of two (has more than one set bit):
  - For $n = 6\ (0110_2)$:
    $$n - 1 = 5\ (0101_2)$$
    $$n \ \& \ (n - 1) = 0110_2 \ \& \ 0101_2 = 0100_2 \neq 0$$

Thus, `n > 0 && (n & (n - 1)) == 0` evaluates to `true` in **$O(1)$ time** without any loops or floating-point function calls.

## Solution Comparison

| Metric / Feature | Human Approach 1 (`problem-231-1.cpp`) | Human Approach 2 (`problem-231-2.cpp`) | Optimized Approach (`problem-231-opt.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Incremental `pow(2, i)` floating-point search | Iterative division by 2 (`while(n % 2 == 0) n /= 2`) | Single bitwise operation `(n & (n - 1)) == 0` |
| **Time Complexity** | $O(\log_2(N))$ | $O(\log_2(N))$ | $O(1)$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(1)$ auxiliary | $O(1)$ auxiliary |
| **Pros & Cons** | Uses heavy floating-point `pow()`, potential precision overhead | Clear and readable, requires loop iterations | Maximum performance $O(1)$ bitwise operation |

> **Note**: All source file documentations were generated using LLM / AI.
