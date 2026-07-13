#include <stdio.h>
#include <stdbool.h>

int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date a, b, c;

    a.day = 14;
    a.month = 7;
    a.year = 2026;

    b.day = 14;
    b.month = 7;
    b.year = 2026;

    bool flag = true;

    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == false)
        printf("Dates are not same\n");
    else
        printf("Dates are same\n");

    return 0;
}