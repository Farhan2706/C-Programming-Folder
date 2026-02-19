#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of Dividend : ");
    scanf("%d",&a);
    printf("Enter the value of Divisor : ");
    scanf("%d",&b);
    int q = a/b;
    float r;
    r = a-(b*q);
    printf("when %d divide by %d then remainder is : %f",a,b,r);


    return 0;
}



// #include <stdio.h>
// int main()
// {
//     float x,y;
//     printf("Enter the value of Dividend : ");
//     scanf("%f",&x);
//     printf("Enter the value of Divisor : ");
//     scanf("%f",&y);
//     float z;
//     z = x/y;
//     printf("When %f divide by %f then quotient is : %f",x,y,z);



//     return 0;
// }