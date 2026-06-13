#include <stdio.h>
int maze(int n, int m){
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if (n==1){
        rightways += maze(n,m-1);
    }
    if(m==1){
        downways += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main()
{
    int n;
    printf("Enter a no of Rows of maze : ");
    scanf("%d",&n);
    int m;
    printf("Enter a no of Column of maze : ");
    scanf("%d",&m);
    
    int ways = maze(n,m);
    printf("Total no of ways to reach the Bottom Right corner of the maze : %d",ways);

return 0;
}