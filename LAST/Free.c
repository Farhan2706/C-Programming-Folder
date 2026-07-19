#include <stdio.h>
#include <stdlib.h>

int main() {

    // Dynamic memory allocation with zero-initialization
    int* ptr = (int*) calloc(10,sizeof(int));

    // Pointer assignment (both pointers refer to the same memory block)
    int* p = ptr;

    // Pointer arithmetic (move to the next integer element)
    p++;

    // Memory deallocation (release the allocated heap memory)
    free(ptr);

    return 0;
}