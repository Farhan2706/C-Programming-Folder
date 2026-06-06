#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int root = sqrt(n);
    printf("The Square Root of %d is : %d",n,root);
return 0;
}