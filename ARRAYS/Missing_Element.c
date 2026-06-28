#include <stdio.h>

int main()
{

    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    int temp = n;

    int sum1 = 0;
    int arr[n];
    printf("Enter Number between 1 to %d\n", n);
    for (int i = 0; i <= n - 2; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
        sum1 = sum1 + arr[i];
    }
    int sum2 = 0;
    int brr[n];
    for (int i = 0; i <= temp - 1; i++)
    {
        brr[i] = i + 1;
        sum2 = sum2 + brr[i];
    }
    int missing = sum2 - sum1;
    printf("Missing Element : %d\n", missing);

    return 0;
}