#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,a,b,d ,dvert,dhoriz;
    d=0;
    printf("Ingrese el primer punto:");
    scanf("%lf",&a);
    printf("Ingrese el segundo punto:");
    scanf("%lf",&b);
    dvert=pow(pow(b-0,2)+pow(d-0,2),0.5);
    dhoriz=pow(pow(d-0,2)+pow(a-0,2),0.5);
    if (dvert<=5 && dhoriz<=(5.0/2.0)){
    printf("Punto (%lf , %lf) esta dentro del circulo",a,b);
    }else{
    printf("El punto esta fuera del circulo");}

    return 0;
}
