# LeetCode Problem 1389: Create Target Array in the Given Order

## Problem Description
Given two arrays of integers `nums` and `index`. Your task is to create a target array under the following rules:
- Initially target array is empty.
- From left to right read `nums[i]` and `index[i]`, insert at index `index[i]` the value `nums[i]` in target array.
- Repeat until there are no elements to read in `nums` and `index`.

Examples:
- `nums = [0,1,2,3,4]`, `index = [0,1,2,2,1]` -> `[0,4,1,3,2]`
- `nums = [1,2,3,4,0]`, `index = [0,1,2,3,0]` -> `[0,1,2,3,4]`

## Solution Overview

| Metric / Feature | Human Approach (`Problem1389.java`) |
| :--- | :--- |
| **Origin** | Human Written (Optimal Implementation) |
| **Algorithm** | Dynamic ArrayList Insertion (`target.add(index[i], nums[i])`) followed by primitive array conversion |
| **Time Complexity** | $O(N^2)$ where $N$ is the number of elements (due to element shifting during insertion) |
| **Space Complexity** | $O(N)$ auxiliary space for `ArrayList` storage |
| **Notes** | No separate `Problem1389Opt.java` file is required as dynamic list insertion is the standard optimal approach for given constraints ($N \le 100$). |

> **Note**: All source file documentations were generated using LLM / AI.
