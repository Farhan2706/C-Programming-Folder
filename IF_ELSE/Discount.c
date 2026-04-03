#include <stdio.h>

int main()
{
    //DISCOUNT

    int x;
    printf("Enter Purchase Amount : ");
    scanf("%d",&x);

    if(x>=1000){
        printf("Congrats for 10 percent Discount");
    }
    else if (x>=500) { 
        printf("Congrats for 5 percent Discount");
    }
    else {
        printf("No Discount");
    }

return 0;
}