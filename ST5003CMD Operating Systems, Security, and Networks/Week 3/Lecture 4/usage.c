#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap;                              // Declare pointer (lives on STACK)
    forheap = (int *)malloc(sizeof(int));      // Allocate memory on Heap first!
    *forheap = 30;                             // Store value to allocated memory

    // PRINT addresses
    printf("Address of pointer (STACK): %p\n", (void *)&forheap);
    printf("Address of data (HEAP): %p\n", (void *)forheap);
    printf("Value stored: %d\n", *forheap);
    return 0;
}
