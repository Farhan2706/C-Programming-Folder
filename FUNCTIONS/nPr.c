#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
int permutation(int n, int r){
    int perm = factorial(n)/factorial(n-r);
    return perm;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);

    int perm = permutation(n,r);
    printf("%d",perm);

return 0;
}