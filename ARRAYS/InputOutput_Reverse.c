#include <stdio.h>

int main()
{
    int arr[4];
    for (int i = 0; i <= 3; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The Reverse of Entered Numbers are : ");
    for (int i = 3; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}