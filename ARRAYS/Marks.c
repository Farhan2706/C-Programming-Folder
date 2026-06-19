#include <stdio.h>

int main()
{

    int marks[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    printf("Students whose marks are less then 35 are : \n");
    for (int i = 0; i <= 9; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}