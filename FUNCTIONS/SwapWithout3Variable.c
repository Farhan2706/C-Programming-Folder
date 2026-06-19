#include <stdio.h>

int main()
{
    int a;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    a = a + b;      // swap Number without third Variable.
    b = a - b;
    a = a - b;
    printf("1st Number : %d\n2nd Number : %d\n",a,b);

return 0;
}