#include <stdio.h>
int fibonacci(int a)
{
    if (a == 1 || a == 2)
        return 1;

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("%d", fib);

    return 0;
}