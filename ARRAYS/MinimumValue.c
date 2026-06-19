#include <stdio.h>
#include<limits.h>
int main() {

    int arr[5];
    for(int i = 0; i <= 4; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    for(int i = 0; i <= 4; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
         printf("Minimum Value : %d\n",min);

    return 0;
}