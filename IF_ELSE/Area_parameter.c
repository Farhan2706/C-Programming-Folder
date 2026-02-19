#include<stdio.h>
int main()
{

    int l;
    printf("Enter the Length of the Rectangle : ");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth of the Rectangle : ");
    scanf("%d",&b);

    int area = l*b;
    int parameter = 2 * (l + b);

    if (area > parameter)
    {
        printf("The area is greater than Parameter");
    }
    else 
    { 
        printf("The parameter is greater than area");
    }
    return 0;
}