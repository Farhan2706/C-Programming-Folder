#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum Value : %d\n", max);

    return 0;
}