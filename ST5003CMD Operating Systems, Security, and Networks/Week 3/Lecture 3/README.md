# Week 3, Lecture 3: Process Lifecycles and OS Interaction

This folder covers how Linux treats a running program as a process: its process ID, its exit code, and how it reads input and writes output.

## Contents

| File | Description |
|---|---|
| `Lab3.pdf` | Lab 3 report with five tasks, screenshots and summaries |
| `Knowledge_Test.pdf` | 15 short questions and answers on processes, PIDs and exit codes |
| `task1_alive.c` | Runs for 30 seconds so it can be watched from another terminal with `ps` |
| `task2_identity.c` | Prints its own process ID (PID) and its parent's ID (PPID) |
| `exit.c` | Returns `0` for a positive number and `1` otherwise |
| `task4_input.c` | Reads a name from standard input and prints a greeting |
| `task5_control.c` | Prints its PID, asks whether to continue, and exits with `0` or `1` |

## Topics

- **Long-running process:** a program runs in the background with `&` and is checked with `ps aux`
- **PID and PPID:** every process has an ID, and its parent is usually the terminal shell
- **Exit codes:** `0` means success, any other number means failure, and `echo $?` shows it
- **Standard I/O:** `scanf` reads from stdin and `printf` writes to stdout
- **Conditional exit:** a program picks its exit code from user input
