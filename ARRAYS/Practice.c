#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i <= n-1; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i <= n-1; i++){
        bool flag = false;
        for(int j = i + 1; j <= n-1; j++){
            if (arr[i] == arr[j]){
                flag = true;
            }
        }
        if (flag == false){
            printf("Unique element is %d and its index is %d\n",arr[i],i);
            break;
        }
    }

    return 0;
}