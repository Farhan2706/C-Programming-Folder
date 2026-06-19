#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int nsp = 1;
    int nst = n;
    int a = 1;
    int mid = (2*n+1)/2+1;
    for (int i = 1; i <= 2*n+1; i++){
        printf("%d",a);
        if (i<mid){
            a++;
        }
        else {
            a--;
        }
    }
    printf("\n");
    for (int j = 1; j <= n; j++){
        int a = 1;
        for (int k = 1; k <= nst; k++){
            printf("%d",a);
            a++;
        }
        for (int l = 1; l <= nsp; l++){
            printf(" ");   
        }
        for (int m = nst ; m >= 1 ; m--){
             a--;
             printf("%d",a);
            
        }
        nst--;
        nsp+=2;
        printf("\n");
    }

return 0;
}