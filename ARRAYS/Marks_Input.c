#include <stdio.h>
int main()
{

    int marks[7];
    for (int i = 0; i <= 6; i++)
    {
        printf("Enter marks of %d studen : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("Students with less then 35 marks : \n");
    for (int i = 0; i <= 6; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}