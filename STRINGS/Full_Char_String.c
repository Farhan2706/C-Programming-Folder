#include <stdio.h>

int main()
{
    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // In this Format null character is Mandatory
    char b[] = "Hello";         // In this Format null character is optional, it consider automatically
    char c[] = {"Hello\0"};  // can also write like --> "Hello\0";
    int i = 0;
    int j = 0;
    int k = 0;

    printf("\n");
    while (a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }
    printf("\n");
    while (b[j] != '\0')
    {
        printf("%c", b[j]);
        j++;
    }
    printf("\n");
    while (c[k] != '\0')
    {
        printf("%c", c[k]);
        k++;
    }
    printf("\n");

    return 0;
}