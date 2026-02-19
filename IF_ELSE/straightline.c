#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    printf("Enter the value of X1 and Y1 : ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the value of X2 and Y2 : ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter the value of X3 and Y3 : ");
    scanf("%lf %lf",&x3,&y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);

    if(m1==m2) {
        printf("All points lie on one Straight line");
    }
    else{ 
        printf("Does not lie on Straight line");
    }
        
    
    return 0;
}