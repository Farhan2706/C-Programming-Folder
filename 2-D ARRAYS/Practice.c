#include <stdio.h>

int main()
{

    int r, c;
    printf("Enter Rows : ");
    scanf("%d", &r);
    printf("Enter Column : ");
    scanf("%d", &c);

    int arr[r][c];
    int brr[r][c];
    int res[r][c];

    printf("Enter the Element of 1st Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Number [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the Element of 2nd Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Number [%d][%d] : ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
            sum += res[i][j];
        }
    }
    printf("Sum : %d \n", sum);

    return 0;
}