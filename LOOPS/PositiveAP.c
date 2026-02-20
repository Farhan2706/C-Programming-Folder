#include<stdio.h>
int main()
{
    // Display AP 100,97,94,.... upto all terms which are positive
    double n;
    printf("Enter a Number : ");
    scanf("%lf",&n);
    // 100, 97, 94,...
    double a = 100;
    for(double i=1; a>0; i++){
        printf("%lf ",a);
        a = a-3;
    }
    return 0;
}