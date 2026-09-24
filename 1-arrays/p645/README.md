# LeetCode Problem 645: Set Mismatch

## Problem Description
You have a set of integers from `1` to `n`, which originally contained all the numbers from `1` to `n`. Unfortunately, due to some error, one of the numbers in `s` got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array `nums` representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array `[duplicate, missing]`.

Examples:
- `nums = [1,2,2,4]` -> `[2,3]`
- `nums = [1,1]` -> `[1,2]`

## Solution Overview

| Metric / Feature | Sorting Approach (`Problem645.java`) |
| :--- | :--- |
| **Origin** | Human Written |
| **Algorithm** | Sort array in ascending order, find adjacent equal elements for duplicate and sequentially track missing |
| **Time Complexity** | $O(N \log N)$ |
| **Space Complexity** | $O(1)$ auxiliary space (ignoring sorting memory) |
| **Notes** | Simple and intuitive linear pass after $O(N \log N)$ sorting. |

> **Note**: All source file documentations were generated using LLM / AI.
