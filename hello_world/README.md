# C - Hello, World

This project is an introduction to C programming, covering basic concepts and tools.

## Author

* **Julien Barbier** - *Project creator*

## Implementation

* **Xavier J. Cruz** - *Project implementation*

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type `gcc main.c`
* What is an entry point
* What is `main`
* How to print text using `printf`, `puts` and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

## Requirements

### C
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### Shell Scripts
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`

## Tasks

0. **Preprocessor**: Write a script that runs a C file through the preprocessor and save the result into another file.
1. **Compiler**: Write a script that compiles a C file but does not link.
2. **Assembler**: Write a script that generates the assembly code of a C code and save it in an output file.
3. **Name**: Write a script that compiles a C file and creates an executable named cisfun.
4. **Hello, puts**: Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
5. **Hello, printf**: Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
6. **Size is not grandeur, and territory does not make a nation**: Write a C program that prints the size of various types on the computer it is compiled and run on.

## More Info

### Betty linter
To run the Betty linter just with command `betty <filename>`:

* Go to the [Betty](https://github.com/holbertonschool/Betty) repository
* Clone the repo to your local machine
* `cd` into the Betty directory
* Install the linter with `sudo ./install.sh`
* `emacs` or `vi` a new file called betty, and copy the script provided in the project instructions
* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
* You can now type `betty <filename>` to run the Betty linter!
