#include <stdio.h>
int main()
{

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("\nEnter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The Entered Numbers are : ");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}