#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("Enter no. of Rows : ");
    scanf("%d", &r);

    printf("Enter no. of Columns : ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter the value of Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("value of [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Rectangle Matrix : \n"); // skip 1st Row and column
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 1; j < c; j++)
        {
            sum += arr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("sum : %d", sum);
    printf("\n");

    return 0;
}