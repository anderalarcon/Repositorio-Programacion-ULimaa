#include <stdio.h>
#include <stdlib.h>


float asd(float a){
    if(a==1){
        return 1.0 ;
    }else{
    return    (1.0/a)+asd(a-1.0);
    }
}
int main()
{
    float a,b;
   printf("Ingrese i :");
   scanf("%f",&a);
    b= asd(a);
    printf("%f",b);
    return 0;
}
