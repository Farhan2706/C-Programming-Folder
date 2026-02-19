#include<stdio.h>
int main()
{
    // How to find SIMPLE INTEREST

    float p,r,t,si;
    p = 105000;             //Original amount (Borrowed or invested)
    r = 7;                 //Rate of interest (anually)
    t = 15;               // Duration (years)
    si = (p*r*t)/100;

    printf("The Simple Interest is = %f",si);



    return 0;
}