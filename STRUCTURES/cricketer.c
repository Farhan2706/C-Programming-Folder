#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int no_of_Matches;
        float average;
    } cricketer;

    cricketer arr[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("First Name : ");
        scanf("%s", arr[i].firstname);
        printf("Last Name : ");
        scanf("%s", arr[i].lastname);
        printf("Age : ");
        scanf("%d", &arr[i].age);
        printf("No of Matches : ");
        scanf("%d", &arr[i].no_of_Matches);
        printf("Average : ");
        scanf("%f", &arr[i].average);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\nName : %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age : %d\n", arr[i].age);
        printf("No of Matches Played: %d\n", arr[i].no_of_Matches);
        printf("Average : %.2f\n", arr[i].average);
    }

    return 0;
}