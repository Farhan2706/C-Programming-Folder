#include <stdio.h>
#include <stdlib.h>

int main() {

    // Null pointer (does not point to any valid memory location)
    int* ptr = NULL;  // Address -> NULL (commonly shown as 0x0 or (nil))

    // Display the pointer address
    printf("%p", ptr);

    return 0;
}