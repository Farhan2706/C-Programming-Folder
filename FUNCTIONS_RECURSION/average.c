#include<stdio.h>

float average(float a, float b, float c){
    return (a+b+c)/3;
}
int main () {
    float a,b,c;
    printf("Enter a 1st Number : ");
    scanf("%f",&a);
    printf("Enter a 2nd Number : ");
    scanf("%f",&b);
    printf("Enter a 3rd Number : ");
    scanf("%f",&c);

    printf("The average is : %f",average(a,b,c));

    average(a,b,c);
    
    return 0;
}