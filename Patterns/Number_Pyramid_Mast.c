#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        int a;
        a = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
 
            printf("%d", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}