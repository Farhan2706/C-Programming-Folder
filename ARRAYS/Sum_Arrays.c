#include <stdio.h>

int main()
{

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("Total Sum : %d\n", sum);

    return 0;
}