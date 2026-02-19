#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the Cost price : ");
    scanf("%d",&cp);
    printf("Enter the Selling price : ");
    scanf("%d",&sp);
    int p = sp-cp;
    int l = cp-sp;
    if(sp>cp){
        printf("Profit of %d Rupees.",p);
    }

    else if(cp>sp){
        printf("Loss of %d Rupees.",l);
    }
    else{
        printf("Proft of %d Rupees",p);
    }

    return 0;
}