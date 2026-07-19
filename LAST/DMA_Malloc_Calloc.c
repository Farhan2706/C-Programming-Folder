#include <stdio.h>
#include <stdlib.h>

int main(){

    // Dynamic memory allocation with zero initialization
    int* ptr = (int*) calloc(10,4);

    // Dereferencing the pointer to access the first element
    printf("%d\n",*ptr);

    // Dynamic memory allocation (memory contains garbage values)
    // int* ptr = (int*) malloc(10*4);
    // printf("%d\n",*ptr);

    // Dynamic memory allocation for float values
    // float* ptr = (float*) malloc(10*sizeof(float));
    // printf("%f\n",*ptr);

    // Dynamic memory allocation for characters with zero initialization
    // char* ptr = (char*) calloc(10,sizeof(char));
    // printf("%c\n",*ptr);

    return 0;
}