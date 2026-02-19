#include<stdio.h>
int main()
{
    //Absolute integer
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);

    if(a<0){
        a = a * (-1);
    }
         printf("The absolute integer is : %d",a);


    return 0;

}