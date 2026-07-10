#include <stdio.h>

int main()
{
    char str[15] = "Hello World";
    printf("%s\n", str);
    for (int i = 10; i >= 3; i--)
    {
        str[i + 1] = str[i]; // push string adjacent
    }
    str[3] = 'i'; // insert i
    printf("%s\n", str);

    return 0;
}