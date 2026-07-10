#include <stdio.h>
#include <string.h>

int main()
{

    char s1[12] = "Hello World";
    char s2[12];
    strcpy(s2, s1);
    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}