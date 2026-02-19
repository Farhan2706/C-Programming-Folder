// #include <stdio.h>
// int main()
// {

//     int a, b, c, d;
//     printf("Enter a 1st Number : ");
//     scanf("%d", &a);
//     printf("Enter a 2nd Number : ");
//     scanf("%d", &b);
//     printf("Enter a 3rd Number : ");
//     scanf("%d", &c);
//     printf("Enter a 4th Number : ");
//     scanf("%d", &d);
//     if (a > b && a > c && a>d)
//     {
//         printf("%d is the greatest number", a);
//     }
//     if (b > a && b > c && b>d)
//     {
//         printf("%d is the greatest number", b);
//     }
//     if (c > a && c > b && c>d)
//     {
//         printf("%d is the greatest number", c);
//     }
//     else
//     {
//         printf("%d is the greatest number", d);
//     }

//     return 0;
// }



#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of Sumit : ");
    scanf("%d",&a);
    printf("Enter the age of Ajay : ");
    scanf("%d",&b);
    printf("Enter the age of Sahil : ");
    scanf("%d",&c);

    if(a<b){
        if(a<c)
            printf("Sumit is Youngest.",a);
        else
            printf("Sahil is Youngest.",c);
    }
    else{
        if(b<c)
            printf("Ajay is Youngest.",b);
        else
            printf("Sahil is Youngest.",c);
    }
    
    // if(a<b && a<c){
    //     printf("Sumit is Youngest");
    // }
    // if(b<a && b<c){
    //     printf("Ajay is Youngest");
    // }
    // if(c<a && c<b){
    //     printf("Sahil is Youngest");
    // }
    // if(a==b && b==c && c==a){
    //     printf("Same age");
    // }

    return 0;
}