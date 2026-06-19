#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("The factorial of %d is : %d", n, fact);

    return 0;
}