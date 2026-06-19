#include <stdio.h>

int main()
{
    int n;
    printf("Enter No. of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) //No. of Rows
    {
        for (int j = 1; j <=(n+1)-i; j++) //No. of Columns
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}