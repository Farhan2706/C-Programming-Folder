#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student
{
    int roll_no;
    char name[30];
    char department[30];
    char cource[30];
    int year_of_joining;
} student;

void check(student s1, student s2)
{
    bool flag = true;
    if (strcmp(s1.department, s2.department) != 0)
    {
        flag = false;
    }
    if (flag == true)
    {
        printf("\nSame Department\n");
        printf("Department : %s\n", s1.department);
        printf("Name and Roll No : %s (%d)\n", s1.name, s1.roll_no);
        printf("Name and Roll no : %s (%d)\n", s2.name, s2.roll_no);
    }
}

int main()
{

    student s[5];
    s[0].roll_no = 1021;
    strcpy(s[0].name, "Sahil");
    strcpy(s[0].department, "Computer Science");
    strcpy(s[0].cource, "B.Tech");
    s[0].year_of_joining = 2024;

    s[1].roll_no = 1048;
    strcpy(s[1].name, "Sumit");
    strcpy(s[1].department, "Electrical Engineering");
    strcpy(s[1].cource, "Diploma");
    s[1].year_of_joining = 2021;

    s[2].roll_no = 2107;
    strcpy(s[2].name, "Ali");
    strcpy(s[2].department, "Mechanical Engineering");
    strcpy(s[2].cource, "B.E.");
    s[2].year_of_joining = 2023;

    s[3].roll_no = 1093;
    strcpy(s[3].name, "Rahul");
    strcpy(s[3].department, "Information Technology");
    strcpy(s[3].cource, "B.Tech");
    s[3].year_of_joining = 2025;

    s[4].roll_no = 1048;
    strcpy(s[4].name, "Arbaz");
    strcpy(s[4].department, "Computer Science");
    strcpy(s[4].cource, "B.Tech");
    s[4].year_of_joining = 2020;

    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            check(s[i], s[j]);
        }
    }

    return 0;
}