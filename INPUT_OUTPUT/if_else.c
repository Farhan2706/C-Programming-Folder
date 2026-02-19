#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("It is an Even Number");
    }
    if (x%2!=0)
    {
        printf("It is an Odd Number");
    }



    return 0;
}