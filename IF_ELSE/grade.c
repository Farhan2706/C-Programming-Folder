#include <stdio.h>
int main()
{
    int a;
    printf("Enter tha Percentage : ");
    scanf("%d", &a);

    if (a >= 80)
    {
        printf("A grade");
    }
    else if (a >= 60)
    {
        printf("B grade");
    }
    else if (a >= 40)
    {
        printf("C grade");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}