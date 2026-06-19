#include <stdio.h>
void swap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main()
{
    int arr[2];
    for (int i = 0; i <= 1; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    swap(arr);
    printf("1 Number : %d\n", arr[0]);
    printf("2 Number : %d\n", arr[1]);

    return 0;
}