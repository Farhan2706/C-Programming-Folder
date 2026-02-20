#include<stdio.h>
int main()
{
    // AP without Maths
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int a=4;
    for(int i=1; i<=n; i=i+1){
        printf("%d ",a);
        //4,7,10,13,16...
        a = a+3;
    }
    
    return 0;
}