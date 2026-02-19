#include <stdio.h>
int main()
{

    int x,y,z;
    printf("Enter the value of first number : ");
    scanf("%d",&x);
    printf("Enter the value of second number : ");
    scanf("%d",&y);
    z = x % y;
    printf("The remainder when %d divide by %d is : %d",x,y,z);



    return 0;
}