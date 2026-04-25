#include<stdio.h>

int sum_natural(n){
    if(n==1){
        return 1;
    }
    return sum_natural (n-1) + n;
}

int main (){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);

    printf("The sum of %d is %d",a,sum_natural(a));
    return 0;
}