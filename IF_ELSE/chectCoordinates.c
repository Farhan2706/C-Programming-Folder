#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("Lies on Origin");
    }
    else if(x==0){
        printf("Lies on Y-axis");
    }
    else if(y==0) { 
        printf("Lies on x-axis");
    }
    else{
        printf("Lies on X and Y plane");
    }

    return 0;
}