#include <stdio.h>

int main()
{
    int count = 0;
    int x = 4;
    int arr[8] = {1, 4, 5, 7, 2, 4, 9, 12};
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > x)
        {
            printf("%d\n", arr[i]);
            count++;
        }
    }
    printf("Total number greater than %d is : %d\n", x, count);
    return 0;
}