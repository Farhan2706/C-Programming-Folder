#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct student{
    char name[30];
    int rollno;
    char department[30];
} student;

void check(student s1, student s2){
    bool flag = true;
    if(strcmp(s1.department, s2.department) != 0){
        flag = false;
    }
    if(flag == true){
        printf("\nSame Department\n");
        printf("Department : %s\n",s1.department);
        printf("Name & Roll no : %s (%d)\n",s1.name,s1.rollno);
        printf("Name & Roll no : %s (%d)\n",s2.name,s2.rollno);
    }
}

int main() {

    student s[3];
    s[0].rollno = 1021;
    strcpy(s[0].name, "Sahil");
    strcpy(s[0].department, "Computer Science");
 

    s[1].rollno = 1048;
    strcpy(s[1].name, "Sumit");
    strcpy(s[1].department, "Electrical Engineering");
  

    s[2].rollno = 2107;
    strcpy(s[2].name, "Ali");
    strcpy(s[2].department, "Computer Science");
 
    for(int i = 0; i <= 2; i++){
        for(int j = i+1; j <= 2; j++){
            check(s[i],s[j]);
        }
    }

    return 0;
}