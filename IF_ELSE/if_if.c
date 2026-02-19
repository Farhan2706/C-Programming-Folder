#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);

    if((a%5==0 || a%3==0) && a%15!=0){
        printf("The number is divisible by 5 or 3 but not 15");
        }
    else {
        printf("This required condition not match");
     }
    

    return 0;
}