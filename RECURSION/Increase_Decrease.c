#include <stdio.h>
void incdec(int x)
{
    if (x == 0)  // base case
        return;
    printf("%d\n", x); // code
    incdec(x - 1); // recursive call
    printf("%d\n", x); // code
    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    incdec(n);

    return 0;
}