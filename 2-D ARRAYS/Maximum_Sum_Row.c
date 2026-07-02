#include <stdio.h>
#include <limits.h>

int main() {
    int r,c;
    printf("Number of Rows : ");
    scanf("%d",&r);
    
    printf("Number of Column : ");
    scanf("%d",&c);

    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter value of [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int row = -1;
    int max = INT_MIN;
    for(int i = 0; i < r; i++){
         int sum = 0;
        for(int j = 0; j < c; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                row = i;
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Maximum Value is %d and Row number is %d: ",max,row);

    return 0;
}