#include <stdio.h>

int main()
{
    printf("\n");
    for (int i = 65; i<=90; i++){
        char ch = (char)i;
        printf("The ASCII Value of %c is %d\n",ch,i);
    }
    printf("\n");
    for (int j = 97;j<=122;j++){
        char ch = (char)j;
        printf("The ASCII Value of %c is %d\n",ch,j);
    }

return 0;
}