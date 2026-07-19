#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Take size from user
    printf("Enter Number of Integers You Want : ");
    scanf("%d", &n);

    // Allocate memory dynamically and initialize it to 0
    int *ptr = (int *)calloc(n, sizeof(int));

    // Save the starting address
    int *p = ptr;

    // Store values in allocated memory
    printf("Enter %d Number : \n", n);
    for (int i = 0; i < n; i++)
    {
        // Write value to memory location
        scanf("%d", &(*ptr));

        // Move pointer to next element
        ptr++;
    }

    // Read and display values
    printf("Output : ");
    for (int i = 0; i < n; i++)
    {
        // Access value using pointer
        printf("%d ", *p);

        // Move pointer to next element
        p++;
    }

    printf("\n");

    return 0;
}