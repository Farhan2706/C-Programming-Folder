#include <stdio.h>

int main()
{
    char s1[] = "Hello World";
    char *s2 = s1;
    s1[0] = 'M';        // Shallow Copy.Change in s1 is also reflect in s2

    printf("%s\n",s1);  //Original string also change.
    printf("%s\n",s2);  

    return 0;
}