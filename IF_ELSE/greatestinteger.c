#include <stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter a 1st Number : ");
    scanf("%d", &a);
    printf("Enter a 2nd Number : ");
    scanf("%d", &b);
    printf("Enter a 3rd Number : ");
    scanf("%d", &c);
    printf("Enter a 4th Number : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest number", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is the greatest number", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is the greatest number", d);
    }
    else
    {
        printf("All the Numbers are Equal");
    }

    return 0;
}