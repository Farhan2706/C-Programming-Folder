#include <stdio.h>
#include <stdbool.h>

int main() {

    typedef struct date{
        int day;
        int month;
        int year;
    } date;

    date a,b,c;

    a.day = 12;
    a.month = 5;
    a.year = 2012;

    b.day = 12;
    b.month = 5;
    b.year = 2012;

    bool flag = true;

    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if(flag == true) printf("Dates are same\n");
    else printf("Dates are Different\n");

    return 0;
}