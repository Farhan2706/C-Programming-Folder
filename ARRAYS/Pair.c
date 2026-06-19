#include <stdio.h>

int main()
{

    int arr[5];
    int x = 8;
    int pair = 0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("(%d,%d)\n", arr[i], arr[j]);
                pair++;
            }
        }
    }
    printf("Total number of pairs : %d\n", pair);
    return 0;
}