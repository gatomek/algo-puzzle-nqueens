# N-Queens Puzzle

## Introduction

This project is concerned with n-queens puzzle.
It provides the general solution for board size of given **n**.
The solution is calculated by backtracking algorithm.
It can't be calculated by analitical approach.
It must be obtained step by step (brute force).
The result consists of all sequences described as follows:

Example of one sequence [0, 6, 4, 7, 1, 3, 5, 2] from the solution of the board size of 8:


|   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 0 | **Q** | . | . | . | . | . | . | . |
| 1 | . | . | . | . | **Q** | . | . | . |
| 2 | . | . | . | . | . | . | . | **Q** |
| 3 | . | . | . | . | . | **Q** | . | . |
| 4 | . | . | **Q** | . | . | . | . | . |
| 5 | . | . | . | . | . | . | **Q** | . |
| 6 | . | **Q** | . | . | . | . | . | . |
| 7 | . | . | . | **Q** | . | . | . | . |
|   |   |   |   |   |   |   |   |   |
|   | *0* | *6* | *4* | *7* | *1* | *3* | *5* | *2* |


### Complexities
- Time complexity: O( n!)  
- Memory complexity: O( n*n)


### Project details:
- Project: cmake 3.16.0-rc1
- Tests: Boost.Test 1.71
- C++ Standard Compliance: C++17
- C++11: explicitly deleted constructors and operator, placeholder type specifier (auto)
- C++14: initializing variables using braces

### Functional Backlog:
- usage approach described in book "algorithms + data structures = programs" without board as a bool matrix

### Technical backlog
- compilation with clang, g++
- static code analyzes by SonarCloud, clang-tidy, cpp-check
- validating against MISRA coding standard
- tests by valgrind
- performance check in case of using array instead of vectors (from matrix approach)
- chart displaying consumed time vs. size of the board - visualization of time complexity O( n!)

