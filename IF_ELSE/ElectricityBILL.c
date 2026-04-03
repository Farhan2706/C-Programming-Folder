#include <stdio.h>

int main()
{ 
    //Electricity Bill

    int x;
    printf("Enter Units : ");
    scanf("%d",&x);

    if (x<=100){
        printf("5 Rupess per Unit");
    }
    else if (101 <= x && x<= 200){
        printf("7 Rupees per Unit");
    }
    else{
        printf("10 Rupees per unit");
    }
    

return 0;
}