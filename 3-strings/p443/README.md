# LeetCode Problem 443: String Compression

## Problem Description
Given an array of characters `chars`, compress it using the following algorithm:

Begin with an empty string `s`. For each group of consecutive repeating characters in `chars`:
- If the group's length is `1`, append the character to `s`.
- Otherwise, append the character followed by the group's length.

The compressed string `s` **should not be returned directly**, but instead, be stored **in the input character array** `chars`. Note that group lengths that are `10` or longer will be split into multiple characters in `chars`.

After you are done **modifying the input array**, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Examples:
- `chars = ["a","a","b","b","c","c","c"]` -> `6`, `chars = ["a","2","b","2","c","3"]`
- `chars = ["a"]` -> `1`, `chars = ["a"]`
- `chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]` -> `4`, `chars = ["a","b","1","2"]`

## Solution Comparison

| Metric / Feature | Human String Conversion (`Problem443.java`) | In-Place Arithmetic Digit Reversal (`Problem443Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Developed after studying & taking hints from AI |
| **Algorithm** | Two-pointer read/write; converts multi-digit counts via `String.valueOf(count).toCharArray()` | Two-pointer read/write; extracts digits via `% 10` arithmetic and reverses digit subarray in-place |
| **Time Complexity** | $O(N)$ | $O(N)$ |
| **Space Complexity** | $O(1)$ auxiliary space ($O(\log_{10} K)$ temporary String allocations) | Strict $O(1)$ auxiliary space (zero heap / GC allocations) |
| **Pros & Cons** | Clean and idiomatic; allocates small intermediate string objects for counts $\ge 10$ | Pure zero-allocation in-place algorithm; satisfies strict embedded/zero-GC constraints |

> **Note**: All source file documentations were generated using LLM / AI.
