#include <stdio.h>
#include <limits.h>

int main() {

    int max = INT_MIN;
    int smax = INT_MIN;
    int arr[7];
    for(int i = 0; i <= 6; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i <= 6; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if (arr[i]>smax && max != arr[i]){
            smax = arr[i];
        }
    }
        printf("Second Largest Number : %d\n",smax);
    return 0;
} 