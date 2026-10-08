# LeetCode Problem 26: Remove Duplicates from Sorted Array

## Problem Description
Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.

Consider the number of unique elements of `nums` to be `k`. To get accepted, you need to do the following things:
- Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially.
- The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

Examples:
- `nums = [1,1,2]` -> `k = 2`, `nums = [1,2,_]`
- `nums = [0,0,1,1,1,2,2,3,3,4]` -> `k = 5`, `nums = [0,1,2,3,4,_,_,_,_,_]`

## Solution Comparison

| Metric / Feature | Human Approach (`Problem26.java`) | Human Optimized Approach (`Problem26Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written | Human Written (Optimal In-Place) |
| **Algorithm** | Extraction via `TreeSet<Integer>` and array rewrite | Two-pointer read/write overwrite (`k` slow pointer, `i` fast pointer) |
| **Time Complexity** | $O(N \log U)$ ($U$ unique elements) | $O(N)$ (Single linear scan) |
| **Space Complexity** | $O(U)$ auxiliary space | $O(1)$ auxiliary space (in-place) |
| **Pros & Cons** | Simple set-based deduplication, but allocates extra memory and has logarithmic tree overhead | Optimal $O(1)$ auxiliary memory, $O(N)$ runtime, fully in-place |

> **Note**: All source file documentations were generated using LLM / AI.
