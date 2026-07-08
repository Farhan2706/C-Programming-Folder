#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Input : ");
    scanf("%[^\n]s", str);

    // String Length
    int length = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        length++;
        k++;
    }
    // Swap
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse : ");
    puts(str);
    printf("Length of String : %d\n", length);
    return 0;
}