#include <stdio.h>
void palindrome(int arr[])
{
    int i = 0;
    int j = 4;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            printf("Not Palindrome");
            return;
        }
        i++;
        j--;
    }
    printf("Palindrome");
    return;
}
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    palindrome(arr);

    return 0;
}