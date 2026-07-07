#include <stdio.h>

int main()
{

    int n;
    printf("Number of Rows and Columns : ");
    scanf("%d", &n);

    int arr[n][n];
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int count = 1;
    int tne = n * n;
    while (count <= tne)
    {
        // Min Row
        for (int j = minc; j <= maxc && count <= tne; j++)
        {
            arr[minr][j] = count;
            count++;
        }
        minr++;
        // max Column
        for (int i = minr; i <= maxr && count <= tne; i++)
        {
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
        // Max Row
        for (int j = maxc; j >= minc && count <= tne; j--)
        {
            arr[maxr][j] = count;
            count++;
        }
        maxr--;
        // Min Column
        for (int i = maxr; i >= minr && count <= tne; i--)
        {
            arr[i][minc] = count;
            count++;
        }
        minc++;
    }
    printf("\n");
    printf("Spiral Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}