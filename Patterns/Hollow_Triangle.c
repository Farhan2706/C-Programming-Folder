#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            if (j == i || i == 1 || i == n || j == 1)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }

return 0;
}