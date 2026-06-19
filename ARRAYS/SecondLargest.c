#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    printf("Second Maximum Value : %d\n", smax);
    return 0;
}