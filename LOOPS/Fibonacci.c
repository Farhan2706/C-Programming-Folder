#include <stdio.h>

int main()
{
    int n, a, b, sum;
    printf("Enter a Number : ");
    scanf("%d", &n);

    a = 1;
    b = 1;

    if (n == 1 || n == 2)
    {
        sum = 1;
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
            
        }
    }
    printf("The fibonacci of %d is %d", n, sum);

    return 0;
}