#include <stdio.h>
void fun(int arr[]){     // Pass by Reference, Not pass by Value.
    arr[2] = 27;   
    return;
}

int main() {

    int arr[4] = {2,5,7,9,};
    printf("%d\n",arr[2]);

    fun(arr);
    printf("%d\n",arr[2]);

    return 0;
}