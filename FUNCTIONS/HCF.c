#include <stdio.h>
int min(int x, int y){ 
if (x<y) return x;
else return y;
}
int gcd(int a, int b){
    int hcf;
    for (int i = 1; i <= min(a,b); i++){
        if(a%i==0 && b%i==0)
        hcf = i;
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,hcf);

return 0;
}