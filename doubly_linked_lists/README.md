# Doubly Linked Lists Project

## Introduction

This project focuses on the understanding and implementation of doubly linked lists in C. Doubly linked lists are a fundamental data structure that facilitates efficient insertion, deletion, and bidirectional navigation. Unlike singly linked lists, each node in a doubly linked list contains references to both the next and the previous nodes, allowing more versatile operations.

## Learning Objectives

Upon completion of this project, participants should be able to:

- Describe the properties and benefits of doubly linked lists.
- Implement basic operations on doubly linked lists, including insertion, deletion, and traversal.
- Understand how to manage memory when working with dynamically allocated data structures.
- Use doubly linked lists to solve more complex problems.

## Technical Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- Code should use the Betty style for checking coding and documentation.
- The use of global variables is prohibited.
- No more than 5 functions per file.
- The prototypes of all functions should be included in a header file called `lists.h`, with all header files being include guarded.

## Data Structures

For this project, the following data structure is used for each node of the doubly linked list:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### 0. Print list

Write a function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

### 1. List length

Write a function that returns the number of elements in a linked `dlistint_t` list.

- Prototype: `size_t dlistint_len(const dlistint_t *h);`

[Additional tasks here]

## How to Compile

A specific example of how to compile the project (if needed), including any flags or libraries:

```bash
gcc -Wall -pedantic -Werror -Wextra *.c -o [executable_name]
```


