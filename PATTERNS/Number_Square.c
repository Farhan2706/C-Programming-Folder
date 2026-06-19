#include <stdio.h>

int main()
{
    int r;
    printf("Enter no. of Rows of Square : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++) // No. of Rows
    {
        for (int j = 1; j <= r; j++) //No. of Column
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}