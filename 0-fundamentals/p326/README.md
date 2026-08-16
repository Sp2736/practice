# LeetCode Problem 326: Power of Three

## Problem Description
Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.

An integer `n` is a power of three if there exists an integer `x` such that $n == 3^x$.

## Mathematical Concept (`problem-326-opt.cpp`)

Unlike powers of two, powers of three do not map cleanly to single set bits in binary. However, we can leverage prime factorization and 32-bit integer limits:

- **Maximum 32-bit Power of 3**:
  The maximum value of a 32-bit signed integer is $\text{INT\_MAX} = 2^{31} - 1 = 2,147,483,647$.
  The largest power of 3 less than $\text{INT\_MAX}$ is:
  $$3^{19} = 1,162,261,467$$

- **Prime Factorization Property**:
  Because $3$ is a prime number, the only prime factor of $3^{19}$ is $3$.
  Therefore, any positive integer $n$ that is a power of 3 ($3^k$ for $0 \le k \le 19$) **must cleanly divide $3^{19}$** without leaving a remainder.

- **Modulo Check**:
  $$\text{If } n > 0 \text{ and } (1162261467 \pmod n == 0) \implies n \text{ is a power of 3.}$$

> ⚠️ **Interview Note**: While this approach runs in $O(1)$ time, it relies on language-specific integer bounds (32-bit integer limits) and is often not preferred by interviewers who want to test loop structures or logarithmic logic.

## Solution Comparison

| Metric / Feature | Human Approach 1 (`problem-326-1.cpp`) | Human Approach 2 (`problem-326-2.cpp`) | Optimized Approach (`problem-326-opt.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Exponent generation using `pow(3, i)` | Iterative division by 3 (`while(n % 3 == 0) n /= 3`) | Modulo check against $3^{19} = 1162261467$ |
| **Time Complexity** | $O(\log_3(N))$ | $O(\log_3(N))$ | $O(1)$ |
| **Space Complexity** | $O(1)$ auxiliary | $O(1)$ auxiliary | $O(1)$ auxiliary |
| **Pros & Cons** | Floating-point `pow()` overhead | Standard interview-preferred iterative solution | Constant time $O(1)$ arithmetic, relies on 32-bit limits |

> **Note**: All source file documentations were generated using LLM / AI.
