# Week 5: Memory Segments with GDB

This folder covers how a running program is laid out in memory, and how GDB is used to find the address of each segment.

## Contents

| File | Description |
|---|---|
| `Lab4_1.pdf` | Lab 4.1 report: text and initialized data segments, little-endian byte order |
| `Lab4_2.pdf` | Lab 4.2 report: BSS, heap and stack address ranges, with post-lab questions |
| `demo2.c` | Has a function (Text), a string constant (RoData) and an initialized global variable (Data) |
| `demo.c` | Has an uninitialized global variable (BSS), a local variable (Stack) and a `malloc` variable (Heap) |

## Topics

- **Segments:** the function is in `.text`, constants are in `.rodata`, initialized globals are in `.data`, and uninitialized globals are in `.bss`
- **GDB commands:** `break`, `run`, `info files`, `info proc mappings`, `print`, and `x` to read memory
- **Byte order:** the value `0x12345678` is stored as `78 56 34 12`, so the system is little-endian
- **Heap and stack:** the heap grows up and the stack grows down, so they move toward each other
- **Address randomization:** addresses usually differ between runs (ASLR), and each process has its own private memory
