#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 8;
    int arr[8] = {3, 0, 6, 0, 0, 1, 6, 0};
    int ans[8];
    printf("Input Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Push zeros

    int idx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
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

    printf("Final Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}