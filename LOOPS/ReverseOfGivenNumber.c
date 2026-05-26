#include <stdio.h>

int main()
{
    int n,count,rn,ld,m;
    printf("Enter a Number : ");
    scanf("%d",&n);

    rn = 0;  //Reverse Number
    while(n!=0){
    rn = rn*10;
    ld = n%10;
    rn = rn + ld;
    n = n/10;
    }
        printf("The Reverse of Given Number : %d",rn);
return 0;
}