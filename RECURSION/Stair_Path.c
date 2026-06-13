#include <stdio.h>
int stair(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    int ways = stair(n-1) + stair(n-2);  // Single or Double steps only
    return ways;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int stairway = stair(n);
    printf("Total No of ways : %d",stairway);

return 0;
}