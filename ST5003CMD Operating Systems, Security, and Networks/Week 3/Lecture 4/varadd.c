#include <stdio.h>
#include <stdlib.h>

int global_var = 150;   // Data Segment
int bss_var;            // BSS Segment

int main() {
    int local_var = 30;                          // Stack
    static int local_static = 100;               // Data Segment
    int *heap_var = (int *)malloc(sizeof(int));  // Heap
    *heap_var = 500;

    printf("....Variable Addresses....\n\n");
    printf("global_var:    %p (Data)\n", (void *)&global_var);
    printf("bss_var:       %p (BSS)\n", (void *)&bss_var);
    printf("local_var:     %p (Stack)\n", (void *)&local_var);
    printf("local_static:  %p (Data)\n", (void *)&local_static);
    printf("heap_var ptr:  %p (Stack- Pointer)\n", (void *)&heap_var);
    printf("heap_var:      %p (Heap)\n", (void *)heap_var);

    long difference = (long)&local_var - (long)heap_var;
    if (difference < 0)
        difference = -difference;

    printf("\nAddress difference between Stack and Heap: %ld bytes\n", difference);

    free(heap_var);
    return 0;
}
