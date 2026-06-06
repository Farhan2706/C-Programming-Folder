#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    printf("Enter Base : ");
    scanf("%d", &a);
    printf("Enter Exponent : ");
    scanf("%d", &b);

    int power = (int)pow(a, b);
    printf("%d Raised to the Power %d = %d",a,b,power);

    return 0;
}