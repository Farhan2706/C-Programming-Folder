#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sumodd = 0;
    int sumeven = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 == 0) sumeven +=arr[i];
        else sumodd += arr[i];
    }
    printf("Sum of Even Numbers : %d\n", sumeven);
    printf("Sum of odd Numbers : %d\n", sumodd);
    int d = sumeven - sumodd;
    printf("Total Difference : %d\n", d);

    return 0;
}