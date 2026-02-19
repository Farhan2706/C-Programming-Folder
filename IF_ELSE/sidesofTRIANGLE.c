#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st side of triangle : ");
    scanf("%d", &a);
    printf("Enter the 2nd side of triangle : ");
    scanf("%d", &b);
    printf("Enter the 3rd side of triangle : ");
    scanf("%d", &c);
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Triangle is Valid");
    }
    else {
        printf("Triangle is Invalid");
    }

    return 0;
}