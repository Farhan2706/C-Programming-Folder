#include <stdio.h>
int stair(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    int ways = stair(n-1) + stair(n-2) + stair(n-3); // if Single, Double, Triple steps
    return ways;
}

int main()
{
    int n;
    printf("Enter Number of stairs : ");
    scanf("%d",&n);

    int stairways = stair(n);
    printf("Total no of ways to Reach %dth stair : %d",n,stairways);

return 0;
}