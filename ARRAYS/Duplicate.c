#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idx = -1;
    int idx2 = -1;
    int Num = -1;
    bool flag = false;
    int n;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                Num = arr[i];
                idx = i + 1;
                idx2 = j + 1;
                break;
            }
        }  
    }
     if (flag == false)
        {
            printf("No Duplicate Numbers\n");
           // break;
        }
        if (flag == true)
        {
            printf("%d is Duplicate Number and its index is %d and %d\n", Num, idx, idx2);
           // break;
        }

    return 0;
}