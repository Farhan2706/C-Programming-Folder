#include <stdio.h>

int main()
{

    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char x = '\0';
    int i = 0;
    while (arr[i] != '\0')
    { // '\0' --> Null Character, ASCII Value --> 0
        printf("%c ", arr[i]);
        i++;
    }
    printf("\n");
    printf("ASCII Value of Null character --> %d", x);
    printf("\n");
    return 0;
}