#include<stdio.h>
int main()
{
    // Multiplication Table 
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=n; i<=n*20; i=i+n){
        printf("%d ",i);
        
    }
    


    return 0;
}