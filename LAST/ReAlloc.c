#include <stdio.h>
#include <stdlib.h>

int main(){

    // Dynamic memory allocation (heap allocation)
    int* ptr = (int*) malloc(10*sizeof(int)); 
    printf("%p\n",ptr);

    // Memory reallocation / resizing the allocated block
    ptr = realloc(ptr,200*sizeof(int));
    printf("%p\n",ptr);

    // Memory reallocation with a much larger size
    // (may relocate the block to a new address)
    ptr = realloc(ptr,200000*sizeof(int));
    printf("%p\n",ptr);

    return 0;
}