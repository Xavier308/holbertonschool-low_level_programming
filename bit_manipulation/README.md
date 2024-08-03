# Bit Manipulation Project

## Project Overview

This project focuses on understanding and applying bit manipulation techniques in C programming. Bit manipulation is a powerful tool for achieving efficiency and performance improvements in software development, allowing direct manipulation of data at the most granular level.

## Learning Objectives

- Understand bitwise operators and how to use them
- Learn how to manipulate bits, set, clear, and toggle individual bits
- Understand how to use bit manipulation to solve real-world problems
- Practice applying bit manipulation techniques in C programming

## Requirements

- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style**: Betty style

## Installation

Clone the repository to your local machine:

```bash
git clone [repository-url]
```
## Compilation

To compile the files in this project, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [executable_name]
```

Replace [executable_name] with the name you wish to give the compiled program.

## Tasks

### 0. 0

**Description**: Write a function that converts a binary number to an unsigned int.

- **Prototype**: `unsigned int binary_to_uint(const char *b);`

### 1. 1

**Description**: Write a function that prints the binary representation of a number.

- **Prototype**: `void print_binary(unsigned long int n);`

### 2. 10

**Description**: Write a function that returns the value of a bit at a given index.

- **Prototype**: `int get_bit(unsigned long int n, unsigned int index);`

### 3. 11

**Description**: Write a function that sets the value of a bit to 1 at a given index.

- **Prototype**: `int set_bit(unsigned long int *n, unsigned int index);`

### 4. 100

**Description**: Write a function that sets the value of a bit to 0 at a given index.

- **Prototype**: `int clear_bit(unsigned long int *n, unsigned int index);`

## Usage

Here's an example of how to use one of the compiled programs:

```bash
./[executable_name]
```

Replace [executable_name] with the name of your compiled program.

# Acknowledgments
- Acknowledge anyone or any resources that helped you with this project.


