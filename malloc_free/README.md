# C - malloc, free

## Overview
This project focuses on dynamic memory allocation in C programming using `malloc` and `free`. It's designed for master-level programmers to understand and implement memory management techniques.

## Author
- **Julien Barbier**

## Implementer
- **Xavier J. Cruz**

## Key Concepts
1. **Dynamic Memory Allocation**: Understanding the difference between automatic and dynamic allocation.
2. **malloc and free**: Learning how to use these functions for memory management.
3. **Memory Leaks**: Using valgrind to check for memory leaks.

## Requirements
- Use allowed editors: `vi`, `vim`, `emacs`
- Compile on Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Follow Betty style guidelines
- No use of global variables
- Maximum 5 functions per file
- Only allowed C standard library functions are `malloc` and `free`
- You can use `_putchar`
- Include function prototypes in `main.h`

## Resources
The project provides resources on dynamic memory allocation in C, including a PDF overview and a video tutorial. It's crucial to review these materials thoroughly before starting the tasks.

## Learning Objectives
By the end of this project, you should be able to explain:
- The difference between automatic and dynamic allocation
- What `malloc` and `free` are and how to use them
- Why and when to use `malloc`
- How to use valgrind to check for memory leaks

## Tasks
1. Write a function that creates an array of chars, and initializes it with a specific char
2. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
3. Write a function that concatenates two strings
4. Write a function that returns a pointer to a 2 dimensional array of integers
5. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function

This project aims to deepen your understanding of memory management in C, a crucial skill for efficient and robust programming. It challenges you to handle dynamic memory allocation and deallocation, improving your overall C programming skills.
