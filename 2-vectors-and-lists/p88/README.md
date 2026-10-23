# LeetCode Problem 88: Merge Sorted Array

## Problem Description
You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

Examples:
- `nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3` -> `nums1 = [1,2,2,3,5,6]`
- `nums1 = [1], m = 1, nums2 = [], n = 0` -> `nums1 = [1]`
- `nums1 = [0], m = 0, nums2 = [1], n = 1` -> `nums1 = [1]`

## Solution Comparison

| Metric / Feature | Auxiliary Array Approach (`Problem88.java`) | Backward Three-Pointer In-Place (`Problem88Opt.java`) |
| :--- | :--- | :--- |
| **Origin** | Human Written logic | Developed after studying & taking hints from AI |
| **Algorithm** | Merges elements from both arrays into temporary auxiliary buffer `nums` of size `m + n`, then copies back | Iterates backwards with three pointers (`i = m-1`, `j = n-1`, `k = m+n-1`) placing larger elements directly into the back of `nums1` |
| **Time Complexity** | $O(M + N)$ | $O(M + N)$ |
| **Space Complexity** | $O(M + N)$ auxiliary buffer | $O(1)$ constant space (fully in-place) |
| **Pros & Cons** | Intuitive and simple merge sort step, but requires extra memory allocation | Optimal in-place solution with zero extra allocations, avoids overwriting unread elements |

> **Note**: All source file documentations were generated using LLM / AI.
