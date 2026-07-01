#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of Students : ");
    scanf("%d", &r);

    int arr[r][3];
    for (int i = 0; i < r; i++)
    {
        printf("Enter Marks of %d Student : \n", i + 1);
        printf("Physics : ");
        scanf("%d", &arr[i][0]);
        printf("Chemistry : ");
        scanf("%d", &arr[i][1]);
        printf("Math : ");
        scanf("%d", &arr[i][2]);
    }
    printf("\n");
    printf("Marks of Students : \n");
    for (int i = 0; i < r; i++)
    {
        printf("Marks of %d Student : ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}