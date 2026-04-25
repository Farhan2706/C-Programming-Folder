#include<stdio.h>
float force(float m){
    return (m)*9.81;
}
int main(){
    float m;
    printf("Enter the value of mass : ");
    scanf("%f",&m);

    printf("The value of Force is : %.2f",force(m));

    return 0;
}