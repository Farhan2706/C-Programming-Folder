#include <stdio.h>

int main()
{

    // Open file in write mode
    // FILE* ptr = fopen("Test.txt","w");

    // String to be written to the file
    // char str[] = "Hi,\nMy Name is Farhan";

    // Write string to the file
    // fputs(str,ptr);

    // Close the file after writing
    // fclose(ptr);

    // Open file in read mode
    FILE *ptr = fopen("Test.txt", "r");

    // Character array (buffer) to store file content
    char str[100];

    // Read the file line by line
    while (fgets(str, 100, ptr) != NULL)

        // Display the current line
        printf("%s", str);

    // Print a new line after reading the file
    printf("\n");

    // Close the file
    fclose(ptr);

    return 0;
}