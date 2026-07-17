#include <stdio.h>

int main(){

    int n = 7;
    int arr[7] = {2,44,65,233,7,90,5};

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n"); 

    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-2-i; j++){
            if(arr[j]>arr[j+1]){ 
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i <= n-1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}