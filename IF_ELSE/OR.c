#include<stdio.h>
int main()
{
    // Or = ||
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a%5==0 || a%3==0){
        printf("It is Divisible by 5 or 3");
    }
    else {
        printf("It is not Divisible by 5 or 3");
    }

    return 0;
}