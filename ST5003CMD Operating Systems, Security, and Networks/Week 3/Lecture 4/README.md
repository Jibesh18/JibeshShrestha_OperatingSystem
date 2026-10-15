# Lab 4: Data Types and Memory Segments

## Code

**datatype.c** (size of each data type)

```
#include <stdio.h>

int main() {
    printf("== Data Type Sizes on This System ==\n");
    printf("char:        %zu bytes\n", sizeof(char));
    printf("int:         %zu bytes\n", sizeof(int));
    printf("float:       %zu bytes\n", sizeof(float));
    printf("double:      %zu bytes\n", sizeof(double));
    printf("long:        %zu bytes\n", sizeof(long));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("long long:   %zu bytes\n", sizeof(long long));
    return 0;
}
```

**varadd.c** (addresses of variables in each segment)

```
#include <stdio.h>
#include <stdlib.h>

int global_var = 150;   // Data
int bss_var;            // BSS

int main() {
    int local_var = 30;                // Stack
    static int local_static = 100;     // Data
    int *heap_var = (int *)malloc(sizeof(int));  // Heap
    *heap_var = 500;

    printf("global_var:   %p (Data)\n", (void *)&global_var);
    printf("bss_var:      %p (BSS)\n", (void *)&bss_var);
    printf("local_var:    %p (Stack)\n", (void *)&local_var);
    printf("local_static: %p (Data)\n", (void *)&local_static);
    printf("heap_var ptr: %p (Stack - Pointer)\n", (void *)&heap_var);
    printf("heap_var:     %p (Heap)\n", (void *)heap_var);

    long difference = (long)&local_var - (long)heap_var;
    if (difference < 0)
        difference = -difference;
    printf("\nAddress difference between Stack and Heap: %ld bytes\n", difference);

    free(heap_var);
    return 0;
}
```

**usage.c** (pointer on the stack, data on the heap)

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap;
    forheap = (int *)malloc(sizeof(int));
    *forheap = 30;

    printf("Address of pointer (STACK): %p\n", (void *)&forheap);
    printf("Address of data (HEAP): %p\n", (void *)forheap);
    printf("Value stored: %d\n", *forheap);
    return 0;
}
```

## Preview

**datatype output**

```
char:         1 bytes
int:          4 bytes
float:        4 bytes
double:       8 bytes
long:         8 bytes
unsigned int: 4 bytes
long long:    8 bytes
```

**varadd output**

```
global_var:    0x64d8dc06b010 (Data)
bss_var:       0x64d8dc06b01c (BSS)
local_var:     0x7ffde3c20a64 (Stack)
local_static:  0x64d8dc06b014 (Data)
heap_var ptr:  0x7ffde3c20a68 (Stack - Pointer)
heap_var:      0x64d90b91b010 (Heap)

Address difference between Stack and Heap: 29845059820116 bytes
```

- Data and BSS have the lowest addresses, then the Heap, and the Stack has the highest.
- The system is 64-bit (`long` = 8 bytes).
