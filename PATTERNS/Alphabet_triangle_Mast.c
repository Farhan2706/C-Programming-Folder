#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int nsp = 1;
    int nst = n;
    int a = 1;
    for (int i = 1; i <= 2*n+1; i++){
        int d = a + 64; 
        char ch = (char)d;
        printf("%c",ch);
        a++;
    }
    printf("\n");
    for (int j = 1; j <= n; j++){
        int b = 1;
        for (int k = 1; k <= nst; k++){
            int d = b + 64; 
        char ch = (char)d;
        printf("%c",ch);
        b++;
        }
        for (int l = 1; l <= nsp; l++){
            printf(" ");
            b++;
        }
        for (int m = 1; m <= nst; m++){
            int d = b+64;
            char ch = (char)d;
            printf("%c",ch);
            b++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }

return 0;
}