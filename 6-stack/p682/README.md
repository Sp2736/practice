# LeetCode Problem 682: Baseball Game

## Problem Description
You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings `operations`, where `operations[i]` is the $i^{\text{th}}$ operation you must apply to the record and is one of the following:
- An integer `x`: Record a new score of `x`.
- `"+"`: Record a new score that is the sum of the previous two scores.
- `"D"`: Record a new score that is double the previous score.
- `"C"`: Invalidate the previous score, removing it from the record.

Return the sum of all the scores on the record after applying all the operations.

Examples:
- `operations = ["5","2","C","D","+"]` -> `30`
- `operations = ["5","-2","4","C","D","9","+","+" ]` -> `27`
- `operations = ["1","C"]` -> `0`

## Solution Comparison

| Metric / Feature | Stack Simulation (`Problem682_1.cpp`) | Vector Simulation (`Problem682_2.cpp`) | Vector + Running Sum (`Problem682_3.cpp`) |
| :--- | :--- | :--- | :--- |
| **Origin** | Human Written logic | Human Written logic | Human Written logic |
| **Algorithm** | Classic `std::stack<int>`; requires popping 2 values and pushing back to compute `"+"` | `std::vector<int>` utilized as a stack; enables direct random access (`score.back()` and `score[n-2]`) | `std::vector<int>` maintaining a synchronous running accumulator `sum` during each operation |
| **Time Complexity** | $O(N)$ (pass through ops + emptying stack to sum) | $O(N)$ (pass through ops + post-accumulation loop) | $O(N)$ (strictly 1 pass with immediate $O(1)$ sum updates) |
| **Space Complexity** | $O(N)$ auxiliary stack space | $O(N)$ contiguous dynamic array | $O(N)$ contiguous dynamic array |
| **Pros & Cons** | Strict stack paradigm, but cumbersome multi-pop/push for `"+"` and extra loop to empty/sum | Random access makes `"+"` concise and clean; contiguous memory cache advantages | Optimal implementation: combines random-access efficiency with zero extra post-processing passes |

> **Note**: All source file documentations were generated using LLM / AI.

