#include<stdio.h>
int main()
{
    // And = &&
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a>99 && a<1000){
        printf("It is a three digit Number");
    }
    else {
        printf("It is not a three digit number");
    }

    return 0;
}


