#include <stdio.h>

int main() {

    int r,c;
    printf("Rows of 1st Matrix :");
    scanf("%d",&r);
    
    printf("Columns of 1st Matrix :");
    scanf("%d",&c);

    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Value of [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    int r1,c1;
    printf("Rows of 1st Matrix :");
    scanf("%d",&r1);
    
    printf("Columns of 1st Matrix :");
    scanf("%d",&c1);

    int brr[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("Value of [%d][%d] : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    printf("1st Matrix : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("2nd Matrix : \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    int res[r][c1];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c1; j++){
            res[i][j] = 0;
            for(int k = 0; k < r1; k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    printf("\n");
    printf("Resultant Matrix : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c1; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}