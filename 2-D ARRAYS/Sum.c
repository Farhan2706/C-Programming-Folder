#include <stdio.h>

int main()
{ 
    int r, c;
    printf("Enter number of Rows : ");
    scanf("%d", &r);

    printf("Enter number of Columns : ");
    scanf("%d", &c);

    int arr[r][c], brr[r][c], sum[r][c];
    printf("Enter the value of 1st Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value of [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the value of 2nd Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value of [%d][%d] : ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    int total = 0;
    printf("The Sum of Two Matix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", sum[i][j]);
            total += sum[i][j];
        }
        printf("\n");
    }
    printf("Total Sum : %d", total);
    printf("\n");

    return 0;
}