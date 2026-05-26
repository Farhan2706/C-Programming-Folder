#include <stdio.h>

int main()
{
    int n,count;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int i = 1;
    count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("Total digits : %d",count);

return 0;
}