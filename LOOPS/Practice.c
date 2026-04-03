/*#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("%d is greater",a);
    }
    else if (b>a && b>c){
        printf("%d is greater",b);
    }
    else {
        printf("%d is greater",c);
    }
    
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {

    // Stored data
    char names[10][20] = {
        "Rahul", "Priya", "Amit", "Neha", "Arjun",
        "Simran", "Karan", "Anjali", "Rohit", "Sneha"
    };

    int ages[10] = {21, 20, 22, 19, 23, 21, 20, 22, 24, 19};
    int marks[10] = {78, 85, 67, 92, 74, 88, 69, 95, 81, 73};

    char search[20];
    int found = 0;

    // Input name
    printf("Enter name to search: ");
    scanf("%s", search);

    // Search loop
    for(int i = 0; i < 10; i++) {
        if(strcmp(names[i], search) == 0) {
            printf("\nName: %s", names[i]);
            printf("\nAge: %d", ages[i]);
            printf("\nMarks: %d", marks[i]);
            found = 1;
            break;
        }
    }

    // If not found
    if(found == 0) {
        printf("Person not found");
    }

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int s;
    printf("Enter Salary Amount : ");
    scanf("%d",&s);

    if (s>=250000 && s<= 500000){
        printf("5 Percent Tax");
    }
    else if (s>500000 && s<= 1000000){
        printf("20 Percent Tax");
    }
    else if (s>1000000){
        printf("30 Percent Tax");
    }
    else {
        printf("No Tax");
    }
return 0;
}*/

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i = 1; i<=n; i++){
        if (i==21){ 
            continue;
        }
        printf("The value of i is : %d\n",i);
        
           
     
    }
return 0;
}