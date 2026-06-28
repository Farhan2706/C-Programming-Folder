#include <stdio.h>
void rotate(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter Number of Rotation : ");
    scanf("%d", &k);
    printf("Output : ");
    if (k > n)
        k = k % n;
    rotate(arr, 0, n - 1);
    rotate(arr, 0, k - 1);
    rotate(arr, k, n - 1);

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}