#include<stdio.h>
int main()
{
    // ODD Numbers
    
    printf("Odd Numbers are : ");
    for(int i=1; i<=100; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }

    return 0;
}