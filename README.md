# LeetCode Solutions & C++ Practice Repository

Welcome to my **LeetCode Solutions** repository! This project documents my ongoing journey in mastering Data Structures, Algorithms, and C++ Standard Template Library (STL) through competitive programming.

---

## 💡 Repository Philosophy

As this repository continuously grows with new practice problems, solutions follow a standardized structure:

1. **Human / Intuitive Solution (`problem-X.cpp`)**: 
   - **Written by me (Human)**.
   - Focuses on readability, direct intuition, and fundamental algorithmic logic.
2. **Optimized Solution (`problem-X-opt.cpp`)**: 
   - **Developed after studying and taking hints from AI**.
   - Focuses on optimal time & space complexity, memory layout efficiency, and advanced C++ STL techniques.
3. **Problem Documentation (`README.md`)**:
   - Each problem directory includes a `README.md` comparing both human and optimized solutions.

> **Note on AI & LLM Assistance**:
> - All source file documentations and Doxygen comments are generated using LLM / AI.
> - Optimized code variants (`*-opt.cpp`) were implemented after studying algorithmic hints provided by AI.
> - Standard code variants (`*.cpp`) represent original human logic, i.e. my own coding logic.

---

## 📁 Repository Organization Guidelines

This repository is organized logically by topic and problem number to scale cleanly:

- **General Problems**: `p<problem_number>/` (e.g., `p1/`)
- **STL / Topic-specific Problems**: `stl/<container>/p<problem_number>/` (e.g., `stl/vector/p1920/`)
- **File Naming Standard**:
  - `problem-<ID>.cpp`: Standard human-written implementation.
  - `problem-<ID>-opt.cpp`: AI-assisted optimized implementation.
  - `README.md`: Problem statement, complexity analysis, and comparison table.

---

## 🛠️ Compilation & Execution

All solution files are self-contained and include a runnable `main()` function with sample test cases. You can compile and execute any solution file using `g++` (C++11 or newer):

```bash
# General Compilation Command
g++ -std=c++11 -O2 path/to/problem-file.cpp -o solution

# Execute Binary
./solution
```

---

## 🎯 Personal Goals
- Build deep mastery over C++ STL containers and algorithms.
- Systematically optimize time and space complexity for complex algorithmic challenges.
- Maintain clean, documented, and scalable code standards across all solutions.
