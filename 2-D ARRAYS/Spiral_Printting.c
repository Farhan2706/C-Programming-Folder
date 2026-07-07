#include <stdio.h>

int main()
{

    int c, r;
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
    // Spiral Matrix
    printf("\n");
    printf("Spiral Matrix : \n");
    int minr = 0;
    int maxr = r - 1;
    int minc = 0;
    int maxc = c - 1;
    int count = 0;
    int telement = c * r;

    while (count < telement)
    {
        // Minimum Row
        for (int j = minc; j <= maxc && count < telement; j++)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        // Maximum Column
        for (int i = minr; i <= maxr && count < telement; i++)
        {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        // Maximum Row
        for (int j = maxc; j >= minc && count < telement; j--)
        {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        // Minimum Column
        for (int i = maxr; i >= minr && count < telement; i--)
        {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
    printf("\n");

    return 0;
}