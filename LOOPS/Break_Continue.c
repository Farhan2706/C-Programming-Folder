#include <stdio.h>

int main()
{
    for(int i = 1; i <= 30; i++){
        if(i%3==0){
        printf("%d\n",i);
        continue;
     }
    if (i==28){
        break;
    }
}
return 0;
}