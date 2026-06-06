#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("1st Number : %d\n", a);
    printf("2nd Number : %d\n", b);

    return 0;
}