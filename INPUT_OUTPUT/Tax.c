#include <stdio.h>

int main()
{
    //Calculate income Tax
    int s;
    printf("Enter Salary Amount : ");
    scanf("%d",&s);

    if (s>=250000 && s<= 500000){
        printf("5 Percent Tax");
    }
    else if (s>500000 && s<= 1000000){
        printf("20 Percent Tax");
    }
    else if (s>1000000){
        printf("30 Percent Tax");
    }
    else {
        printf("No Tax");
    }
return 0;
}
