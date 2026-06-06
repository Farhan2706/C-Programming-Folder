#include <stdio.h>
void sum(int a, int b){
   if (a==0) return;
   sum(a-1,b+a);
   printf("%d",sum);
   return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    sum(n,0);
    
return 0;
}