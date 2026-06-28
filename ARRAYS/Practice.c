#include <stdio.h>

int main() {

    int sumt = 0;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i <= 4; i++){
        sumt = sumt + arr[i];
    }
    int summ = 0;
    int brr[4] = {1,2,3,4};
    for(int i = 0; i <= 3; i++){
        summ = summ + brr[i];
    }
    int total = sumt - summ;
    printf("Missing Number : %d\n",total);
    

    return 0;
}