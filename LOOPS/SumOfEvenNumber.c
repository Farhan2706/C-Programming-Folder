#include<stdio.h>
int main(){

    int n,sum,ld;
    printf("Enter a Number : ");
    scanf("%d",&n);

    sum = 0;
    while (n!=0){
        ld = n%10;  //last digit
        if(n%2==0){ 
        sum = sum + ld;
        }
        n = n/10;
        }
    
        printf("The sum is : %d",sum);

    return 0;
}