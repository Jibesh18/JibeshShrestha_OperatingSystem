# Lab 4: Memory Segments with GDB

## Code

**demo2.c** (text and data segments)

```
#include <stdio.h>

int data_global_var = 0x12345678;
const char *text_string_literal = "Text_Segment_Verification";

void check_execution() {
    printf("Executing within the text segment instruction block.\n");
}

int main() {
    printf("Addresses:\n");
    printf("Data (Global Initialized): %p\n", (void *)&data_global_var);
    printf("Text String (ROData): %p\n", (void *)text_string_literal);
    printf("Text Code (Function): %p\n", (void *)&check_execution);
    check_execution();
    printf("Ready for Text/Data segment inspection!\n");
    return 0;
}
```

**demo.c** (BSS, stack and heap)

```
#include <stdio.h>
#include <stdlib.h>

int bss_global_var;

int main() {
    int stack_local_var = 42;

    int *heap_ptr = (int *)malloc(sizeof(int));
    if (heap_ptr == NULL) {
        return 1;
    }
    *heap_ptr = 99;

    printf("Addresses:\n");
    printf("BSS (Global): %p\n", (void *)&bss_global_var);
    printf("Stack (Local): %p\n", (void *)&stack_local_var);
    printf("Heap (Dynamic): %p\n", (void *)heap_ptr);

    printf("Ready for GDB inspection!\n");

    free(heap_ptr);
    return 0;
}
```

**Commands**

```
gcc -g demo2.c -o demo2
gcc -g demo.c -o demo
gdb ./demo
break 24
run
info files
print &bss_global_var
info proc mappings
print stack_local_var
print &stack_local_var
x/4wx $sp
print heap_ptr
x/1wd heap_ptr
continue
quit
```

## Preview

**Lab 4.1 (demo2.c)**
- A program with a function, a text string and a global variable is written.
- GDB is used to see where each one is stored in memory:
  - the function is in `.text`
  - the string is in `.rodata`
  - the variable is in `.data`
- The number `0x12345678` is stored as `78 56 34 12`, so the computer is little-endian.

**Lab 4.2 (demo.c)**
- A program with a global variable, a local variable and a heap variable is written.
- GDB is used to find where each one lives: BSS, stack and heap.
- The heap and stack address ranges are read with `info proc mappings`.
- The values are checked: the local variable is `42` and the heap value is `99`.
