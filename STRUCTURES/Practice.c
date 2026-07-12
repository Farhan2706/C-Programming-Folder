#include <stdio.h>
#include <string.h>

int main() {

    typedef struct Employee{
        char name[30];
        int emp_id;
        int age;
        char location[30];
    }emp;
     
    emp arr[3];
    strcpy(arr[0].name,"Sahil");
    arr[0].emp_id = 234;
    arr[0].age = 21;
    strcpy(arr[0].location,"Delhi");

    strcpy(arr[1].name,"Ali");
    arr[1].emp_id = 546;
    arr[1].age = 27;
    strcpy(arr[1].location,"Mumbai");

    strcpy(arr[2].name,"Zubair");
    arr[2].emp_id = 753;
    arr[2].age = 32;
    strcpy(arr[2].location,"Gujrat");

    for(int i = 0; i <= 2; i++){
        printf("\nName : %s\n",arr[i].name);
        printf("Employee id : %d\n",arr[i].emp_id);
        printf("Age : %d\n",arr[i].age);
        printf("Location : %s\n",arr[i].location);
    }

    return 0;
}