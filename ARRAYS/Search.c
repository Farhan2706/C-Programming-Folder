#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter size of Array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter number to Check : ");
    scanf("%d", &x);

    int index = -1;
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] == x)
        {
            flag = true;
            index = i;
            break;
        }
    if (flag == false)
    {
        printf("%d is Not present in the Array\n", x);
    }
    else
    {
        printf("%d is Present in the Array and its index is %d\n", x, index + 1);
    }

    return 0;
}