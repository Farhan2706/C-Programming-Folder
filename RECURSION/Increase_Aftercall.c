#include <stdio.h>
void increase(int x)
{
    if (x == 0)
        return;
    increase(x - 1);
    printf("%d\n", x);
    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    increase(n);

    return 0;
}