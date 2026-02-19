#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
            printf("%d is greatest.",a);
        else
            printf("%d is greatest.",c);
    }
    else{
        if(b>a)
        if(b>c)
            printf("%d is greatest.",b);
        else
            printf("%d is greatest.",c);
    }
    return 0;
}