// #include<stdio.h>
// int main()
// {
//     float i;
//     i = 2.0*3.0/4.0+4.0/4.0+8.0-2.0+5.0/8.0;
//     printf("The sum is : %f",i);




//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i;
//     i = 2*3/4+4/4+8-2+5/8;
//     printf("The sum is : %d",i);




//     return 0;
// }


#include<stdio.h>
int main()
{
     int i = 2, j = 3, k, l;
     float a, b;
     k = i / j * j;
     l = j / i * i;
     a = i / j * j;
     b = j / i * i;
     printf("%d %d %f %f",k,l,a,b);

    return 0;
}