#include <stdio.h>

int main()
{
    int r, c;
    printf("Number of Rows : ");
    scanf("%d", &r);
    printf("Number of Columns : ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Value of [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Normal Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Wave
    printf("Wave Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d ", arr[r - 1 - i][j]);
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}