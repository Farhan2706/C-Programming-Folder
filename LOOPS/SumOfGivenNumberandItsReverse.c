#include <stdio.h>

int main()
{
    int n,r,sum,temp;
    printf("Enter a Number : ");
    scanf("%d",&n);

    temp = n;
    r = 0;
    while (n>0){
    r = r*10;
    r = r + (n%10);
    n = n/10;
    }
   sum = temp + r;
    printf("The sum of Given Number and its Reverse : %d + %d = %d\n",temp,r,sum);
return 0;
}