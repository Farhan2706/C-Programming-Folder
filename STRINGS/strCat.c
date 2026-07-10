#include <stdio.h>
#include <string.h>

int main() {

    char s1[15] = "Farhan";
    char s2[] = " Khalid";
    strcat(s1,s2);
    int x = strlen(s1);
    printf("Output : %s \n",s1);
    printf("Length of String : %d\n",x);

    return 0;
}