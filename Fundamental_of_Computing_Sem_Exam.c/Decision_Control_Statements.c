// Q1: Write a program to check whether a number is even or odd.

// #include<stdio.h>
// int main(){

// int n;
// printf("Enter a Number : ");
// scanf("%d",&n);

// if(n%2==0){
// printf("It is an Even Number");
//}
// else {
// printf("It is an Odd Number");
// }

// return 0;
//  }

// Q2: write a program to check whether a person is eligible to vote (age>=18)

// #include <stdio.h>

// int main()
//{
// int n;
//  printf("Enter Age : ");
//  scanf("%d",&n);

// if(n>=18){
// printf("You can vote");
// }
// else{
// printf("You can not vote");

//}
// return 0;
//}

// Q3:write a program to find the greater of two numbers.

// #include <stdio.h>

// int main()
// {
//     int a,b;
//     printf("Enter 1st Numebr :");
//     scanf("%d",&a);
//     printf("Enter 2nd Numebr :");
//     scanf("%d",&b);

//     if(a>b){
//         printf("%d id greater",a);
//     }
//     else{
//         printf("%d is greater",b);
//     }

//     return 0;
// }

// Q4:write a program to check whether a given number is divisible by 5.

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a Number : ");
//     scanf("%d",&n);

//     if(n%5==0){
//         printf("%d is divisible by 5",n);
//     }
//     else{
//         printf("%d is not divisible by 5",n);
//     }

// return 0;
// }

// Q5:write a program to check whether a character enterd by the user is a vowel or constant.

// #include <stdio.h>

// int main()
// {
//     char a;
//     printf("Enter a character : ");
//     scanf("%c",&a);

//     if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||
//         a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
//         printf("%c is a vowel",a);
// }
//     else{
//         printf("%c is a consonant",a);
// }
//     return 0;
// }

// Q6:Write a program to find the largest among three numbers using if-else.

// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     printf("Enter 1st Number : ");
//     scanf("%d",&a);
//     printf("Enter 2nd Number : ");
//     scanf("%d",&b);
//     printf("Enter 3rd Number : ");
//     scanf("%d",&c);

//     if (a>b && a>c){
//         printf("%d is greater",a);
//     }
//     else if (b>a && b>c){
//         printf("%d is greater",b);
//     }
//     else{
//         printf("%d is greater",c);
//     }

// return 0;
// }

// Q7:Write a program to check whether a year entered by the user is a leap year or not.

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a Year : ");
//     scanf("%d",&n);

//     if (n%4==0){
//         printf("%d is a leap year",n);
//     }
//     else{
//         printf("%d is not a leap year",n);
//     }

// return 0;
// }

// Q8:Write a program to calculate discount:
//    * If purchase amount >= 1000 ==10% discount.
//    * Otherwise == no discount.

// #include <stdio.h>

// int main()
// {
//     int n,per;
//     printf("Enter Amount : ");
//     scanf("%d",&n);

//     if(n>=1000){
//         per = n-(n*10/100);
//         printf("You got 10 percent discount.\n Total amount to pay : %d",per);
//     }

//     else{
//         printf("No discount.\n Total amount to pay : %d",n);
//     }
// return 0;
// }

// Q9:Write a program to check whether a temperature value indicates:
// •	Above 30°C → “Hot”
// •	Otherwise → “Normal”

// #include <stdio.h>

// int main()
// {
//     int temp;
//     printf("Enter the Whether Temperature in Celcius : ");
//     scanf("%d",&temp);

//     if(temp>30){
//         printf("Hot");
//     }
//     else{
//         printf("Normal");
//     }

//     return 0;
// }

// Q10:10.	Write a program to check login credentials:
// •	If username = "admin" and password = "1234" → Login successful
// •	Otherwise → Invalid login

//     #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[20];
//     int pass;

//     printf("Enter Username: ");
//     scanf("%s", name);

//     printf("Enter Password: ");
//     scanf("%d", &pass);

//     if(strcmp(name, "admin") == 0 && pass == 1234)
//     {
//         printf("Correct");
//     }
//     else
//     {
//         printf("Invalid");
//     }

//     return 0;
// }

// Q11:	Write a program to check whether a number is a two-digit number.

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a Number : ");
//     scanf("%d",&n);

//     if (n>9 && n<100){
//         printf("Two digit Number");
//     }
//     else{
//         printf("Not a Two digit Number");
//     }

// return 0;
// }

// Q12:Write a program to determine electricity bill:
//      •	Units ≤ 100 → ₹5 per unit
//      •	Units > 100 → ₹10 per unit

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter units : ");
//     scanf("%d",&n);

//     if (n<=100){
//     int unit = n*5;
//         printf("5 Rupees per unit.\n Total amount to pay : %d",unit);
//     }
//     else {
//      int unit = n*10;
//         printf("10 Rupees per unit.\n Total amount to pay : %d",unit);
//     }

// return 0;
// }

// Q13:Student Scholarship Eligibility System
// Write a C program that accepts:
// •	Student age (int)
// •	Student percentage marks (float)
// •	Student grade category (char)
// o	A → Excellent
// o	B → Good
// o	C → Average
// Eligibility Criteria:
// •	Student must be 18 years or older
// •	Percentage must be ≥ 75
// •	Grade must be A or B
// If all conditions are satisfied → print "Eligible for Scholarship", otherwise print "Not Eligible".

// #include <stdio.h>

// int main()
// {
//     int age;
//     float per;
//     char grade;

//     printf("Enter age : ");
//     scanf("%d",&age);
//     printf("Enter percentage : ");
//     scanf("%f",&per);
//     printf("Enter grade (A/B/C) : ");
//     scanf(" %c",&grade);

//     if(age>=18 && per>=75 && (grade =='A'|| grade == 'B')){
//         printf("Eligible");
//     }
//     else{
//         printf("Not Eligible");
//     }
// return 0;
// }

// Q14:Write a program in C to accept percentage marks and determine whether a student passes (>=40) or fails.

// #include <stdio.h>

// int main()
// {
//     int per;
//     printf("Enter Percentage : ");
//     scanf("%d",&per);

//     if (per>=40){
//         printf("Pass");
//     }
//     else{
//         printf("Fail");
//     }

// return 0;
// }

// Q15:WAP in C to check whether a floating point number is positive or negative.

// #include <stdio.h>

// int main()
// {
//     float n;
//     printf("Enter a Number : ");
//     scanf("%f",&n);

//     if(n>=0.00){
//         printf("Positive number");
//     }
//     else{
//         printf("Negative number");
//     }

// return 0;
// }

// Q16:WAP in C to Determine whether a character is uppercase or lowercase.

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a Character : ");
//     scanf("%c",&ch);

//     if(ch >= 'a' && ch <= 'z'){
//         printf("Lower case");
//     }
//     else if (ch >= 'A' && ch <= 'Z'){
//         printf("Upper case");
//     }
//     else{
//         printf("Not an alphabet");
//     }
// return 0;
// }

// Q17:WAP in C to Check whether a character is a vowel or consonant.

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);

//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){

//         printf("Vowel");
//        }
//        else{
//         printf("Consonant");
//        }
// return 0;
// }

// Q18:	Write a C program to calculate the final ticket price for a person based on their age and VIP status
// using nested if–else statements. The base ticket price is $10. The program should accept the age of the person
//  and VIP status ('Y' for Yes or 'N' for No) as input from the user. The program should first check the age of
//  the person. If the age is less than 12, a 50% discount should be applied to the ticket price. If the age is 65
//  or above, a 30% discount should be applied. Otherwise, no age-based discount is applied. After applying the
//   age-based discount, the program should then check the VIP status. If the person is a VIP, an additional $2
//   discount should be provided; otherwise, no extra discount is given. Finally, the program should display the
//   final ticket price.

// #include <stdio.h>

// int main()
// {
//     int age;
//     char st;
//     float price = 10.0;

//     printf("Enter age: ");
//     scanf("%d", &age);

//     printf("Enter VIP status (Y/N): ");
//     scanf(" %c", &st);

//     // Age discount
//     if(age < 12)
//     {
//         price = price * 0.5;
//     }
//     else if(age >= 65)
//     {
//         price = price * 0.7;
//     }

//     // VIP discount (separate, not else-if)
//     if(st == 'Y' || st == 'y')
//     {
//         price = price - 2;
//     }

//     printf("Final Ticket Price: %.2f", price);

//     return 0;
// }

// Q19:Write a C program to determine whether a person is eligible for a bank loan using nested if–else
// statements. The program should accept the applicant’s age, monthly income, and employment status
// ('E' for employed and 'U' for unemployed). The eligibility criteria are as follows: the applicant must be 21 years
//  or older. If the age condition is satisfied, the program should check the employment status. If the applicant is
// employed, the program should then check whether the monthly income is at least ₹30,000. If the income is
// sufficient, the loan is approved; otherwise, the loan is rejected due to low income. If the applicant is
// unemployed, the loan is rejected. If the age is below 21, the applicant is not eligible for the loan.

// #include <stdio.h>

// int main()
// {
//     int age, income;
//     char status;

//     printf("Enter age: ");
//     scanf("%d", &age);

//     printf("Press 'E' for Employed and 'U' for Unemployed: ");
//     scanf(" %c", &status);

//     printf("Enter income: ");
//     scanf("%d", &income);

//     if (age >= 21)
//     {
//         if (status == 'E' || status == 'e')
//         {
//             if (income >= 30000)
//             {
//                 printf("You are eligible for loan\n");
//             }
//             else
//             {
//                 printf("Loan rejected due to low income\n");
//             }
//         }
//         else if (status == 'U' || status == 'u')
//         {
//             printf("Loan rejected: applicant is unemployed\n");
//         }
//         else
//         {
//             printf("Invalid status\n");
//         }
//     }
//     else
//     {
//         printf("Not eligible: age must be 21 or above\n");
//     }

//     return 0;
// }

// Q20:Write a C program to calculate the bonus of an employee using nested if–else statements. The program should accept the employee’s years of service,
// performance rating (A, B, or C), and basic salary. The program should first check whether the employee has completed at least 5 years of service.
// If this condition is satisfied, the program should then check the performance rating. Employees with rating A receive a 20% bonus on their basic salary,
// employees with rating B receive a 10% bonus, and employees with rating C receive no bonus. If the employee has less than 5 years of service, no bonus is given.
// The program should display the bonus amount and the final salary.

// #include <stdio.h>

// int main()
// {
//     int years;
//     float salary,bonus;
//     char rating;

//     printf("Enter the year of service : ");
//     scanf("%d",&years);

//     printf("Enter performance rating (A/B/C) : ");
//     scanf(" %c",&rating);

//     printf("Enter Salary : ");
//     scanf("%f",&salary);

//     if(years>=5){
//         if (rating == 'A'||rating == 'a'){
//             bonus = salary*0.20;
//             printf("20 percent bonus: %.2f",bonus);
//         }
//         else if(rating == 'B'||rating =='b'){
//             bonus = salary*0.10;
//             printf("10 percent bonus: %.2f",bonus);
//         }
//         else if(rating == 'C'||rating == 'c'){
//             bonus = 0;
//             printf("No bonus: %.2f",bonus);
//         }
//         else if (years<5){
//             printf("No bonus Received due to less year of service");
//         }
//     }

// return 0;
// }