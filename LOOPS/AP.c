#include<stdio.h>
int main()
{
    // Arithmetic Progression
    // 3 7 11 15 19.....
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=3; i<=4*n-1; i=i+4){
        printf("%d ",i);
        
    }
    


    return 0;
}