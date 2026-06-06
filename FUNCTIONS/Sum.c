#include <stdio.h>
int mul(int x, int y){
    return x*y;
}
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int div(int x, int y){
    return x/y;
}
int main()
{
    int a;
    printf("Enter a 1st Numbner : ");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd Numbner : ");
    scanf("%d",&b);

    int sum1 = mul(a,b);
    printf("Multiply = %d\n",sum1);

    int sum2 = add(a,b);
    printf("Addition = %d\n",sum2);

    int sum3 = sub(a,b);
    printf("Multiply = %d\n",sum3);

    int Sum4 = div(a,b);
    printf("Addition = %d\n",Sum4);

return 0;
}