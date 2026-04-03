#include<stdio.h>
sum(int x, int y){
    printf("The sum is : %d",x+y);
    return x+y;
}

int main()
{
    int a, b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    
    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    sum(a,b);
    return 0;
}