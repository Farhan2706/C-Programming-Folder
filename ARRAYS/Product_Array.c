#include<stdio.h>
int main(){
    int arr[4];
    for(int i = 0; i <= 3; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for (int i = 0; i <= 3; i++){
        product = product * arr[i];
    }
    printf("Product of Given Numbers : %d\n",product);

    return 0;
}