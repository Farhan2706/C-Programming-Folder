#include <stdio.h>
#include <limits.h>

int main()
{

    int n = 5;
    int arr[5] = {66, 435, 675, 123, 23};

    printf("Unsorted Array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int idx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
        }
        int temp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}