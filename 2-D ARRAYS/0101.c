#include <stdio.h>
#include <limits.h>

int main()
{
    int row = -1;
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 0, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (max < count)
            {
                max = count;
                row = i;
            }
        }
    }
    printf("%d Times in Row number : %d", max, row);
    printf("\n");

    return 0;
}