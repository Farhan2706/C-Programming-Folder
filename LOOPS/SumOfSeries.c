#include <stdio.h>

int main()
{
    int n,sum;
    printf("Enter a Number : ");
    scanf("%d",&n);

    //+1 -2 +3 -4 +5 -6 +7 -8.....

    sum = 0;
    for (int i = 1; i<=n; i++)
    if (n%2==0)
        sum = -n/2; // if number Even
    else 
        sum = (-n/2) + n; // if number Odd

    printf("The sum is : %d",sum);

return 0;
}