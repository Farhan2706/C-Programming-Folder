#include <stdio.h>

int main()
{
    char s1[] = "Hello World";
    char *s2;
    s2 = s1;
    s2 = "Mello World";
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}