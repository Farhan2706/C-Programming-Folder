#include<stdio.h>
int main()
{
    // GP without Maths
    double n;
    printf("Enter the Number : ");
    scanf("%lf",&n);
    double a=1;
    for(double i=1; i<=n; i=i+1){
        printf("%lf ",a);
        //1,2,4,8,16,32,64....
        a = a*2;
    }
    
    return 0;
}