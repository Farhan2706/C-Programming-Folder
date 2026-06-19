#include <stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int RecAns = a*power(a,b-1);
    return RecAns;
}

int main()
{
    int a;
    printf("Enter a Base : ");
    scanf("%d",&a);
    int b;
    printf("Enter a Exponent : ");
    scanf("%d",&b);

    int p = power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);

return 0;
}