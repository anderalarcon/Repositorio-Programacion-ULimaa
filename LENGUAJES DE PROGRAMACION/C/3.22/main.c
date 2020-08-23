#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,a,b,d ;
    printf("Ingrese el primer punto:");
    scanf("%lf",&a);
    printf("Ingrese el segundo punto:");
    scanf("%lf",&b);
    d=pow(pow(a-0,2)+pow(b-0,2),0.5);
    if (d<=10){
    printf("Punto (%lf , %lf) esta dentro del circulo",a,b);
    }else{
    printf("El punto esta fuera del circulo");}

    return 0;
}
