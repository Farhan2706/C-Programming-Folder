#include <stdio.h>
int main()
{

    int n, f;
    printf("Enter a Number :");
    scanf("%d", &n);

    f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("The Factorial of %d is %d \n", n, f);
    return 0;
}