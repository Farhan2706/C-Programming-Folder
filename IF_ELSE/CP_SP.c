// #include<stdio.h>
// int main()
// {
//      int cp;
//      printf("Enter the Cost Price : ");
//      scanf("%d",&cp);
//      int sp;
//      printf("Enter the selling Price : ");
//      scanf("%d",&sp);
//     if(sp>cp){
//         printf("Profit");
//     }
//     else {
//         printf("Loss");
//      }
//     return 0;
// }



#include<stdio.h>
int main()
{
     int cp;
     printf("Enter the Cost Price : ");
     scanf("%d",&cp);
     int sp;
     printf("Enter the selling Price : ");
     scanf("%d",&sp);

     int p = sp-cp, L = cp-sp, npl = 0;
    if(sp>cp){
        printf("Profit of : %d Rupees",p);
    }
    if(cp>sp){
        printf("Loss of : %d Rupees",L);
    }
    if(sp==cp){
        printf("Neither Profit Nor Loss : %d Rupees",npl);
    }
    return 0;
}