#include <stdio.h>

int main()
{
    //Percentage of 4 subjects whose marks are out of 40.

    float m1 = 36; //math
    float m2 = 35; //physics
    float m3 = 33; //chemistry
    float m4 = 31; //english


    float m5 = (m1+m2+m3+m4)/160*100;
    printf ("Your Percentage is = %f",m5);

    return 0;
}