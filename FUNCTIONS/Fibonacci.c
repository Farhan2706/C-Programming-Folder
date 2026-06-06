#include<stdio.h>
int fibonacci(int x){
   int a = 0;
   int b = 1;
   int fib = a + b;
   for(int i = 1; i <= x-3; i++){ 
    a = b;
    b = fib;
    fib = a+b;
   }
   return  fib;
}
int main(){

    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int fib = fibonacci(n);
    printf("The %dth term of Fibonacci Sequence is : %d",n,fib);

    return 0;
}