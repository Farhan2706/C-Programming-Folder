#include <stdio.h>
void swap(int *x, int *y)   // Store Adress of Variable
{
    int temp = *x;          // Swap value by Adress
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
    printf("Enter 1st Number : ");
    scanf("%d", &b);

    swap(&a, &b);   // Pass by Reference   //pass Adress Not Value
    printf("1st Number : %d\n", a);
    printf("2nd Number : %d\n", b);

    return 0;
}