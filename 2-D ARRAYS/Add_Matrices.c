#include <stdio.h>

int main() {   
    int r,c;
    printf("Enter no. of Rows : ");
    scanf("%d",&r);
    printf("Enter no. of Column : ");
    scanf("%d",&c);

    int arr[r][c],brr[r][c],sum[r][c];
    printf("Enter Elements of 1st Matrix : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){ 
        printf("Enter value of [%d][%d] : ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter value of 2nd Matrix : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter value of [%d][%d] : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
        printf(" + \n");
     for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrices : \n");
     for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
        sum[i][j] = arr[i][j] + brr[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    int total = 0;
    printf("Totol sum : \n");
     for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
        total += sum[i][j];
            
        }
    } 
        printf("%d ",total);
        printf("\n");

    return 0;
}