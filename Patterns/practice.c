#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

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
return 0;
}