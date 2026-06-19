#include <stdio.h>
int main()
{

    int arr[8];
    for (int i = 0; i <= 7; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &arr[i]);
    }                       //Example : input{1,2,3,4,5,6,7,8}
    printf("Output : ");              //output{11,4,13,8,15,12,17,16}
    for (int i = 0; i <= 7; i++)
    {
        if (i % 2 == 0)     //If index element is Even
            arr[i] += 10;   //Add value by 10
        else                //If index element is Odd
            arr[i] *= 2;    //Multiply value by 2
        printf("%d ", arr[i]);
    }                            
    return 0;
}