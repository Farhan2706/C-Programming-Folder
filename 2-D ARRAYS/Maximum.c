#include <stdio.h>
#include <limits.h>

int main()
{
    int r, c;
    printf("Enter no. of Rows : ");
    scanf("%d", &r);

    printf("Enter no. of Column : ");
    scanf("%d", &c);

    int arr[r][c], brr[r][c];
    printf("Enter the Elements of 1st Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value of [%d][%d] : ", i, j);
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
    int max = INT_MIN;
    int row = -1;
    int col = -1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("Max value is %d and its index is [%d][%d] ", max, row, col);
    printf("\n");

    return 0;
}