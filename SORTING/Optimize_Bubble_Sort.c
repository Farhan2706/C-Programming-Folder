#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 7;
    int arr[7] = {54, 22, 765, 34, 102, 11, 88};

    printf("Unsorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Optimize Bubble sort
    for (int i = 0; i <= n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    
    printf("Sorted Array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}