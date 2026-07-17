#include <stdio.h>
#include <stdbool.h>

int main() {

    int n = 8;
    int arr[8] = {0,3,5,0,7,0,0,1};

    printf("Input Array : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Push Zeros
    for(int i = 0; i < n-1; i++){
        bool flag = true;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    printf("Final Array : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}