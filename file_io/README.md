# Project: File I/O

## Overview

This project focuses on the manipulation of files in C programming, covering the fundamentals of file input/output operations, including creating, opening, closing, reading, and writing files. Understanding these operations is crucial for managing data persistence and interacting with the file system at a low level.

## Learning Objectives

- How to create, open, close, read, and write files in C.
- Understanding file descriptors and their role in file operations.
- Familiarity with the standard file descriptors: STDIN, STDOUT, STDERR.
- Usage of the I/O system calls: `open`, `close`, `read`, `write`.
- Manipulating file permissions with the `open` system call.
- Distinguishing between functions and system calls.

## Requirements

- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style**: Betty style

## Tasks

### 0. Tread lightly, she is near

**Description**: Write a function that reads a text file and prints it to the POSIX standard output.

- **Prototype**: `ssize_t read_textfile(const char *filename, size_t letters);`

### 1. Under the snow

**Description**: Create a function that creates a file.

- **Prototype**: `int create_file(const char *filename, char *text_content);`

### 2. Speak gently, she can hear

**Description**: Write a function that appends text at the end of a file.

- **Prototype**: `int append_text_to_file(const char *filename, char *text_content);`

### 3. cp

**Description**: Write a program that copies the content of a file to another file.

- **Usage**: `cp file_from file_to`

## Compilation

Compile your code with:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [executable_name]
```
# Usage

To run the compiled programs, use:

```bash
./[executable_name]
```
Replace [executable_name] with the name of your program.

# Acknowledgments

- Thanks to all peers and mentors who provided guidance and support throughout this project.


