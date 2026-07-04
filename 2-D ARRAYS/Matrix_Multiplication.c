#include <stdio.h>

int main()
{
    int r, c;
    printf("For 1st Matrix : \n");
    printf("Number of Rows : ");
    scanf("%d", &r);

    printf("Number of Columns : ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter Elements of 1st Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Value of [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int r2, c2;
    printf("For 2nd Matrix : \n");
    printf("Number of Rows : ");
    scanf("%d", &r2);

    printf("Number of Columns : ");
    scanf("%d", &c2);

    int brr[r2][c2];
    printf("Enter Elements of 2nd Matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Value of [%d][%d] : ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");
    printf("First Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second Matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int mult[r][c2];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mult[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    printf("Product of Above Two Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}