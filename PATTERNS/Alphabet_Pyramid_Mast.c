#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
        int a = 1;
        for (int k = 1; k <= i; k++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        int b = i-1;
        for (int l = 1; l <= i-1; l++){
            int g = b + 64;
            char ch = (char)g;
            printf("%c",ch);
            b--;
        }
        printf("\n");
    }

return 0;
}