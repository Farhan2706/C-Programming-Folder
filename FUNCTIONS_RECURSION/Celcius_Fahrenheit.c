#include<stdio.h>
float c2f(float c){
    return ((9*c)/5) + 32;
}
int main(){
    float c;
    printf("Enter the value of Celcius : ");
    scanf("%f",&c);

    printf("The value of Fahrenheit is : %.2f",c2f(c));
    return 0;
}