#include <stdio.h>

int main()
{
    int n,a,b,fib;
    printf("Enter a Number : ");
    scanf("%d",&n);  

    a = 1;
    b = 1;
    fib = a + b;
    
    for (int i = 1; i<=n-2; i++){
        
        fib = a + b; 
        a = b;
        b = fib;
        printf("The Fibonacci of %d is %d\n",i,fib);
    }
    //for(int j =1; j<=n;j++){ 
        

        
return 0;
}