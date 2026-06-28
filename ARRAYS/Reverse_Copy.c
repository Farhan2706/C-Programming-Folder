#include <stdio.h>
int main()
{
    int arr[5];
    int brr[5];
    int reverse;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Reverse : ");
    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[4 - i];
        printf("%d ", brr[i]);
    }
    return 0;
}