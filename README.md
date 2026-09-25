# Data Structures and Algorithms in C++

A structured collection of **Data Structures, Algorithms, LeetCode solutions, and System Design practice** implemented in C++.

This repository is primarily focused on **problem-solving, algorithmic thinking, and interview preparation**. Most solutions are written in an online-judge-friendly format, while a smaller set of files contains complete standalone implementations for learning and experimentation.

---

## 📌 Repository Overview

| Category                | Details            |
| ----------------------- | ------------------ |
| **Language**            | C++                |
| **Standard**            | C++17              |
| **Source Files**        | 436 `.cpp` files   |
| **Solution Classes**    | 414 files          |
| **Standalone Programs** | 5 files            |
| **Build System**        | None               |
| **Test Suite**          | None               |
| **Primary IDE**         | Visual Studio Code |
| **Compiler**            | MinGW / GCC        |
| **Debugger**            | GDB                |

The repository is organized by topic so that problems can be studied progressively according to the data structure or algorithm involved.

---

# 📂 Repository Structure

```text
Data-Structures-and-Algorithms/
│
├── Array-DSA/
├── String-DSA/
├── Graph-DSA/
├── Tree-DSA/
├── LinkedList-DSA/
├── Math-DSA/
├── BST-DSA/
├── System_Design-DSA/
├── Dynamic_Programming-DSA/
├── Tries-DSA/
│
├── Smallest-Index-With-Digit-Sum-Equal-to-Index.cpp
│
├── .vscode/
├── build/
└── README.md
```

---

# 🗂️ Topic-wise Breakdown

| Directory                    | Description                                                             |   Files |
| ---------------------------- | ----------------------------------------------------------------------- | ------: |
| 📦 `Array-DSA`               | Arrays, searching, sorting, heaps, queues, and array-based problems     | **168** |
| 🔤 `String-DSA`              | String manipulation, matching, parsing, and string algorithms           |  **76** |
| 🕸️ `Graph-DSA`              | Graph traversal, shortest paths, connectivity, and graph representation |  **44** |
| 🌳 `Tree-DSA`                | Binary trees, traversals, construction, and tree algorithms             |  **42** |
| 🔗 `LinkedList-DSA`          | Linked-list operations and problem solving                              |  **37** |
| 🔢 `Math-DSA`                | Number theory, arithmetic, combinatorics, and mathematical problems     |  **30** |
| 🌲 `BST-DSA`                 | Binary Search Tree operations and algorithms                            |  **22** |
| 🏗️ `System_Design-DSA`      | Object-oriented and data-structure design exercises                     |  **11** |
| 🧠 `Dynamic_Programming-DSA` | Dynamic programming problems and practice                               |   **3** |
| 🔎 `Tries-DSA`               | Trie implementation and lookup problems                                 |   **2** |

### Root-Level Solutions

There is currently one solution located at the repository root:

```text
Smallest-Index-With-Digit-Sum-Equal-to-Index.cpp
```

---

# 🧩 Types of Programs

The repository contains two main types of C++ files.

## 1. Online Judge Solutions

Most files are written in the format expected by platforms such as **LeetCode** and other online judges.

Typical structure:

```cpp
// Leetcode
// Problem Title
// Difficulty

class Solution {
public:
    // Problem-specific method
};
```

These files intentionally focus only on the required solution.

They may not contain:

* `#include` statements
* `using namespace std`
* `main()`
* Input/output handling
* Definitions for judge-provided structures

For example:

```cpp
class Solution {
public:
    int solve(vector<int>& nums) {
        // Solution
    }
};
```

The online judge generally provides the required environment and test harness.

### Why use this format?

It keeps solutions:

* Short
* Easy to submit
* Focused on the algorithm
* Close to the format expected by coding platforms

---

# 2. Standalone Implementations

Some files contain complete C++ programs with their own `main()` function.

These are primarily intended for **learning and local experimentation**.

Current standalone examples include:

```text
Array-DSA/merge-sort.cpp
BST-DSA/Implementation.cpp
Graph-DSA/Implementation-Using-Adjacency-List.cpp
Tree-DSA/Implementation.cpp
Tries-DSA/implementation.cpp
```

A typical standalone program contains:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    // Example implementation

    return 0;
}
```

These programs can be compiled directly using GCC/MinGW.

---

# 🛠️ Requirements

To work with this repository locally on Windows, install:

### 1. Visual Studio Code

Used as the primary development environment.

### 2. MinGW-w64 / GCC

Required for compiling C++ programs.

Verify installation:

```powershell
g++ --version
```

### 3. GDB

Required for debugging through VS Code.

Verify installation:

```powershell
gdb --version
```

### 4. VS Code C/C++ Extension

Install Microsoft's:

```text
C/C++
```

extension for:

* IntelliSense
* Syntax highlighting
* Debugging
* Compiler integration

---

# ⚙️ C++ Standard

The repository uses **C++17**.

Compilation should therefore use:

```text
-std=c++17
```

---

# ▶️ Compile and Run a Standalone Program

Open PowerShell from the repository root.

Create a build directory:

```powershell
New-Item -ItemType Directory -Force build | Out-Null
```

Compile:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic .\Array-DSA\merge-sort.cpp -o .\build\merge-sort.exe
```

Run:

```powershell
.\build\merge-sort.exe
```

---

## Example: Compile the Trie Implementation

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic .\Tries-DSA\implementation.cpp -o .\build\tries.exe
```

Run:

```powershell
.\build\tries.exe
```

The generated executable remains inside:

```text
build/
```

This keeps generated files separate from the source code.

---

# 🧪 Testing Judge-Style Solutions Locally

A `class Solution` file usually cannot be compiled directly because it may depend on definitions supplied by an online judge.

For example:

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // ...
    }
};
```

The file may require:

```cpp
#include <vector>
using namespace std;
```

and a test driver such as:

```cpp
int main() {

    vector<int> nums = {2, 2, 1};

    Solution obj;

    cout << obj.singleNumber(nums);

    return 0;
}
```

### Recommended local testing process

1. Open the target solution.
2. Identify the required headers.
3. Add missing type definitions if necessary.
4. Create a temporary `main()`.
5. Construct representative test cases.
6. Compile using C++17.
7. Run the executable.
8. Test edge cases.
9. Keep the original judge submission clean.

---

# 📚 Suggested Learning Workflow

The repository can be used as a structured DSA practice collection.

### Step 1 — Choose a Topic

Start with the directory related to the concept being studied.

For example:

```text
Array-DSA
```

or:

```text
LinkedList-DSA
```

### Step 2 — Understand the Problem

Before reading the implementation:

* Identify the input
* Identify the expected output
* Understand the constraints
* Think about possible approaches

### Step 3 — Study the Solution

Analyze:

* Algorithm
* Data structures used
* Loops and conditions
* Edge cases
* Time complexity
* Space complexity

### Step 4 — Trace the Code

Use a small example and manually execute the algorithm.

For example:

```text
Input:
[2, 7, 11, 15]

Target:
9
```

Track variables and data structures step by step.

### Step 5 — Test Edge Cases

Consider:

```text
Empty input
Single element
Duplicate values
Already sorted input
Reverse sorted input
Large input
Minimum values
Maximum values
```

### Step 6 — Implement Without Looking

Try writing the solution from memory.

### Step 7 — Compare

Compare your implementation with the repository solution and identify:

* What was missed
* What can be optimized
* Whether the complexity can be improved

---

# 🧠 Topics Covered

The repository currently contains practice in the following areas:

## Arrays

Topics include:

* Searching
* Sorting
* Prefix sums
* Sliding window
* Two pointers
* Hashing
* Heaps
* Queues
* Array manipulation
* Greedy techniques

Directory:

```text
Array-DSA/
```

---

## Strings

Topics include:

* String manipulation
* Character frequency
* String matching
* Parsing
* Substrings
* Palindromes
* Hashing-based string problems

Directory:

```text
String-DSA/
```

---

## Linked Lists

Topics include:

* Singly linked lists
* Linked-list traversal
* Insertion and deletion
* Reversal
* Fast and slow pointers
* Cycle detection
* Linked-list manipulation

Directory:

```text
LinkedList-DSA/
```

---

## Trees

Topics include:

* Binary trees
* DFS
* BFS
* Tree traversal
* Tree construction
* Recursive tree problems
* Tree properties

Directory:

```text
Tree-DSA/
```

---

## Binary Search Trees

Topics include:

* BST insertion
* BST searching
* BST traversal
* BST validation
* BST-based problems

Directory:

```text
BST-DSA/
```

---

## Graphs

Topics include:

* Graph representation
* BFS
* DFS
* Connectivity
* Shortest paths
* Graph traversal
* Adjacency lists

Directory:

```text
Graph-DSA/
```

---

## Mathematics

Topics include:

* Number theory
* Arithmetic
* Combinatorics
* Mathematical observations
* Number-based algorithms

Directory:

```text
Math-DSA/
```

---

## Dynamic Programming

Current practice includes dynamic programming problems involving:

* State transitions
* Recurrence relations
* Optimization
* Memoization / tabulation concepts

Directory:

```text
Dynamic_Programming-DSA/
```

---

## Tries

Topics include:

* Trie construction
* Prefix-based searching
* Character-based lookup

Directory:

```text
Tries-DSA/
```

---

## System Design / Data Structure Design

This directory contains smaller object-oriented design exercises involving custom data structures and classes.

Directory:

```text
System_Design-DSA/
```

---

# 📊 Repository Statistics

Current repository snapshot:

```text
Total C++ files       : 436
Solution files        : 414
Standalone programs   : 5
Build system          : None
Automated test suite  : None
C++ standard          : C++17
```

The repository is primarily a **personal DSA practice and learning collection**, rather than a production C++ library.

---

# 🧰 VS Code Configuration

The `.vscode` directory contains configuration for:

* C/C++ IntelliSense
* GCC
* GDB
* C/C++ Runner

The configuration is designed around a Windows + MinGW development environment.

Some settings reference machine-specific paths such as:

```text
C:/MinGW/bin/gcc.exe
```

If the repository is cloned onto another computer, these paths may need to be updated.

---

# 🐞 Debugging with GDB

For standalone programs, VS Code can be used to:

* Set breakpoints
* Step through code
* Inspect variables
* Watch expressions
* Examine program execution

The launch configuration expects generated executables under:

```text
build/Debug/outDebug
```

For simple individual files, direct PowerShell compilation is often easier:

```powershell
g++ -std=c++17 -g .\path\to\file.cpp -o .\build\program.exe
```

Then run the generated executable or launch it through GDB/VS Code.

---

# ⚠️ Current Limitations

This repository intentionally keeps the setup simple.

### No centralized build system

There is currently no:

```text
CMakeLists.txt
Makefile
build.sh
build.ps1
```

Each standalone file can be compiled independently.

### No repository-wide test suite

There are no automated unit tests covering all solutions.

Each problem should therefore be tested individually.

### Judge dependencies

Many files depend on online-judge-provided:

```text
headers
classes
structures
test harnesses
```

Therefore, not every `.cpp` file is a standalone executable.

### Inconsistent naming

File names currently use a mixture of:

```text
lowercase
Title-Case
snake_case
kebab-case
```

This reflects the repository's evolution over time.

### `bits/stdc++.h`

Some standalone files use:

```cpp
#include <bits/stdc++.h>
```

This is convenient with GCC/MinGW but is not part of the official C++ standard and may not work with every compiler.

### Machine-specific VS Code settings

Some configuration values reference local Windows paths and may require modification after cloning the repository elsewhere.

---

# 📝 Coding Conventions

When adding a new solution:

### For online-judge problems

Prefer:

```cpp
class Solution {
public:
    // Required method
};
```

Keep the implementation focused on the required method.

### For standalone demonstrations

Use:

```cpp
int main()
{
    // Demonstration
}
```

Include all required headers and supporting definitions.

### Naming

Use a descriptive filename based on the problem or concept.

For example:

```text
merge-sort.cpp
Implementation.cpp
binary-search.cpp
```

### Comments

Add a short comment containing the problem title or implementation topic when useful.

Avoid excessive comments that simply restate the code.

---

# 🚫 Files That Should Not Be Committed

Generated files should not be added to the repository.

Examples:

```text
*.exe
*.out
*.o
*.gdb
*.log
```

The following directory is intended for generated build artifacts:

```text
build/
```

A suitable `.gitignore` can include:

```gitignore
# Build output
build/
*.exe
*.out
*.o

# VS Code
.vscode/*.log

# Debug output
*.gdb
```

---

# 🤝 Contributing

This is primarily a personal practice repository, but additional solutions can follow these guidelines.

### Adding a new problem

1. Identify the appropriate topic.
2. Create a descriptive filename.
3. Follow the existing solution style.
4. Use C++17-compatible syntax.
5. Test the solution.
6. Verify it against the target online judge when applicable.
7. Avoid committing generated binaries.

Example:

```text
Array-DSA/
└── Two-Sum.cpp
```

---

# 🔄 Recommended Problem-Solving Template

For each problem, try to document your own reasoning using:

```text
1. Problem Understanding
2. Brute Force Approach
3. Optimized Approach
4. Data Structure Used
5. Algorithm
6. Time Complexity
7. Space Complexity
8. Edge Cases
9. Implementation
10. Testing
```

This helps turn the repository from a collection of solutions into a long-term **DSA learning resource**.

---

# 🎯 Repository Goals

The main goals of this repository are:

* Strengthen C++ programming skills
* Build strong DSA fundamentals
* Practice problem solving
* Prepare for coding interviews
* Understand common algorithmic patterns
* Implement important data structures
* Improve time and space complexity analysis
* Maintain a personal reference of solved problems

---

# 📖 How to Use This Repository

If you are using this repository for interview preparation, a practical order is:

```text
Arrays
   ↓
Strings
   ↓
Linked Lists
   ↓
Stacks / Queues
   ↓
Binary Trees
   ↓
BST
   ↓
Heaps
   ↓
Graphs
   ↓
Tries
   ↓
Dynamic Programming
   ↓
System Design
```

For each topic:

```text
Learn Concept
     ↓
Solve Easy Problems
     ↓
Solve Medium Problems
     ↓
Study Patterns
     ↓
Solve Without Help
     ↓
Analyze Complexity
     ↓
Review Mistakes
```

---

# 📌 Disclaimer

This repository is primarily **personal practice material**.

Solutions are written for learning, experimentation, and online-judge practice. They may not always represent the most optimal, production-ready, or generalized implementation.

Always understand and test a solution before using it in another project.

---

# 📬 Contact

If you have suggestions, questions, or want to discuss any of the solutions, feel free to connect with me:

* **GitHub:** [Your GitHub Profile](https://github.com/your-username)
* **LinkedIn:** [Your LinkedIn Profile](https://www.linkedin.com/in/your-username/)
* **Email:** `your-email@example.com`

Feel free to open an **Issue** or start a **Discussion** if you have suggestions or find a problem with any solution.

---

# 📜 License

No license file is currently included.

Unless a license is added, treat the contents of this repository as **personal practice material** and do not assume permission to reuse, redistribute, or incorporate the code into other projects.

---

## ⭐ If This Repository Helps You

If you are studying Data Structures and Algorithms, feel free to explore the repository topic by topic and use the implementations as a reference for your own practice.

**Keep solving. Keep learning. Keep improving. 🚀**
