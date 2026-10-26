# Week 3, Lecture 4: Data Types and Memory Segments

This folder covers how data types decide memory size, and where variables are stored in a running process (Data, BSS, Heap and Stack).

## Contents

| File | Description |
|---|---|
| `Lab4.pdf` | Lab 4 report: data type sizes, memory segments, and address mapping |
| `Knowledge_Check.pdf` | 10 short questions and answers on data types and memory layout |
| `datatype.c` | Prints the size in bytes of each data type |
| `varadd.c` | Prints the addresses of variables in each memory segment and the gap between stack and heap |
| `usage.c` | Shows a pointer on the stack that points to a value on the heap |

## Topics

- **Data types:** decide how many bytes a variable needs (`char` is 1 byte, `double` is 8 bytes)
- **Memory segments:** Text, Data, BSS, Heap and Stack
- **Address layout:** Data and BSS have the lowest addresses, then the Heap, and the Stack has the highest
- **Pointers:** a pointer lives on the stack, but the memory it points to can be on the heap
