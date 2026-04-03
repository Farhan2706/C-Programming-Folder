#include<stdio.h>
int main()
{
    double n;
    printf("Enter a Number : ");
    scanf("%lf",&n);
    // Display 100,50,25,... upto n terms.
    double a=100;
    for(double i=1; i<=n; i++){
        printf("%lf ",a);
        a = a/2;
    }
    return 0;
}
