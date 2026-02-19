// #include<stdio.h>
// int main()
// {
//     //TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS EVEN OR ODD
//     int a;
//     printf("Enter the Number : ");
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("This is an Even Number");
//     }
//     else printf("This is an Odd Number");
//     return 0;
// }


#include<stdio.h>
int main()
{
    //Determine whether the year is a leap year or not
    int a;
    printf("Enter year : ");
    scanf("%d",&a);

    if(a%4==0){
        printf("This is a Leap Year");
    }
    else printf("This is not a Leap year");
    return 0;
}