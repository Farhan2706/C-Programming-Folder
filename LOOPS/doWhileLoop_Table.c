#include <stdio.h>

int main()
{
    int n,m,i = 1;
    printf("Enter a Number : ");
    scanf("%d",&n);

    do{
        m = n*i;
        printf("%d * %d = %d\n",n,i,m);
        i++;
    }
    while(i<=10);

return 0;
}