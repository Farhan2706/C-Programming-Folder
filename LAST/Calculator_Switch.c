#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    int x;
    printf("Select : \n1 --> (+)\n2 --> (-)\n3 --> (*)\n4 --> (/)\n=");
    scanf("%d", &x);

    switch (x)
    {
    case (1):
        printf("Output : %d+%d = %d\n", a, b, a + b);
        break;
    case (2):
        printf("Output : %d-%d = %d\n", a, b, a - b);
        break;
    case (3):
        printf("Output : %d*%d = %d\n", a, b, a * b);
        break;
    case (4):
        printf("Output : %d/%d = %f\n", a, b, (float)a / b);
        break;
    default:
        printf("Invalid\n");
        break;
    }
    return 0;
}