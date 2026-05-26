#include<stdio.h>
int main (){

    int n,m;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int i = 1;
    while (i<=10){ 
     m = n*i;
    printf("%d * %d = %d\n",n,i,m);
      i++;
 }
    return 0;
}