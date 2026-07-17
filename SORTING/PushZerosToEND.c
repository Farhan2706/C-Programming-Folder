#include <stdio.h>

int main()
{

    int arr[8] = {3, 0, 6, 0, 0, 1, 6, 0};
    int ans[8];
    printf("Input Array : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Push zeros

    int idx = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != 0)
        {
            ans[idx] = arr[i];
            idx++;
        }
    }
    while (idx != 8)
    {
        ans[idx] = 0;
        idx++;
    }

    printf("Final Array : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", ans[i]);
    }

    printf("\n");

    return 0;
}