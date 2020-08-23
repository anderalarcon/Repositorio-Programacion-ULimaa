#include <stdio.h>
#include <stdlib.h>

float asd(float a){
if(a==1){
    return (1.0/2.0);
}else{
    return (a/(a+1.0))+ asd(a-1);
}

}
int main()
{
    float a,b;
    printf("Ingrese i:");
    scanf("%f",&a);
    b=asd(a);
    printf("El resultado es : %f",b);

    return 0;
}
