#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Input : ");
    scanf("%[^\n]s", str);

    // Length of String
    int length = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        length++;
        k++;
    }
    printf("Length of String : %d\n", length);

    return 0;
}