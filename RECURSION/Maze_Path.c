#include <stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways += maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main()
{
    int n;
    printf("Enter a no of Rows of the maze : ");
    scanf("%d",&n);
    int m;
    printf("Enter a no of Column of the maze : ");
    scanf("%d",&m);

    int ways = maze(1,1,n,m);
    printf("Total no of ways to reach the end : %d",ways);

return 0;
}