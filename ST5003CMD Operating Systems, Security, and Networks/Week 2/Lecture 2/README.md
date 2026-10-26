# Week 2, Lecture 2: Linux Commands and C Compilation

This folder covers basic Linux commands, installing GCC, writing small C programs, and the four stages of compilation.

## Contents

| File | Description |
|---|---|
| `Lab1.pdf` | Lab 1 report: Linux file commands, `apt`, and compiling a C program |
| `Lab_2.pdf` | Lab 2 report: C program structure, compilation stages, return values |
| `Knowledge Check.pdf` | Short answers on operating system basics |
| `lab1_hello.c` | Prints a message and the sum of two numbers |
| `lab2_hello.c` | Prints "Hello, World!" |
| `number.c` | Reads a number with `scanf` and prints it |
| `username.c` | Reads a name, age and height and prints them |
| `return.c` | Returns `0` to show the program finished successfully |

## Topics

- **Linux commands:** `mkdir`, `cd`, `nano`, `cat`, `cp`, `mv`, `rm`, `ls -l`
- **GCC:** installed with `apt` and used with `-Wall` and `-o`
- **Compilation stages:** preprocessing (`.i`), compiling (`.s`), assembling (`.o`) and linking (executable)
- **Exit codes:** `0` means success, and `echo $?` shows the exit code of the last program
