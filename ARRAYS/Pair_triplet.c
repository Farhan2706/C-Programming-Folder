#include <stdio.h>
int main()
{
    int pair = 0;
    int x;
    int arr[8];
    printf("Enter number you want to make pair : ");
    scanf("%d", &x);
    for (int i = 0; i <= 7; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            for (int k = 0; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                    pair++;
                }
            }
        }
    }
    printf("Total number of paris : %d\n", pair);

    return 0;
}