# Week 2, Lecture 2: Linux Commands and C Compilation

Basic Linux commands, installing GCC, writing small C programs, and the four stages of compilation.

## Files

| File | What it does |
|---|---|
| `lab1_hello.c` | Prints a message and the sum of two numbers (Lab 1) |
| `lab2_hello.c` | Prints "Hello, World!" (Lab 2) |
| `number.c` | Reads a number with `scanf` and prints it |
| `username.c` | Reads a name, age and height and prints them |
| `return.c` | Returns `0` to show the program finished successfully |

## Lab 1: Linux commands and compiling

Files and folders are managed with these commands:

```
mkdir linux_lab
cd linux_lab
nano greeting.txt
cat greeting.txt
cp greeting.txt backup.txt
mv backup.txt old_greeting.txt
rm old_greeting.txt
ls -l
```

GCC is installed with `apt`, and `lab1_hello.c` is compiled with warnings on (`-Wall`):

```
sudo apt update
sudo apt install build-essential
gcc --version
gcc -Wall lab1_hello.c -o hello_program
./hello_program
```

- The first run used `a = 10` and `b = 5`. The values were then changed to `100` and `200` and the program was compiled again.
- `-o` sets the name of the output file, and `./` runs it.

## Lab 2: C programs and the compilation stages

```
gcc number.c -o number
./number
```

The other programs are compiled the same way. Compilation has four stages:

| Stage | Command | Output |
|---|---|---|
| Preprocessing | `gcc -E return.c -o return.i` | `.i` file |
| Compiling | `gcc -S return.i -o return.s` | `.s` file |
| Assembling | `gcc -c return.s -o return.o` | `.o` file |
| Linking | `gcc return.o -o return` | executable |

The exit code of the last program is checked with `echo $?`. `0` means success and any other number means an error.

## Knowledge check

- **Operating system:** software that manages the hardware and sits between the user and the computer (Linux, macOS, Windows).
- **Purposes:** acts as a bridge between user and hardware, shares resources (CPU, memory, I/O), and gives programs a stable base to run on.
- **Types:** Desktop (Windows), Mobile (Android), Open-source (Linux).
- **Kernel:** the core of the OS that controls the hardware. The full OS also has system programs and user interfaces.
- **Program vs process:** a program is code stored on disk. A process is a program that is running in memory.
- **Virtualization:** one physical computer is split into several virtual machines, so different operating systems can run on the same hardware.
- **Environments:** mobile computing and cloud / distributed computing.

## Note

`scanf("%s", name)` stops reading at a space, so a name with a space (like "Jibesh Shrestha") breaks the next inputs.
