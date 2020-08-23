#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,area,pi,volumen;
    printf("Ingrese el radio:");
    scanf("%f",&a);
    printf("Ingrese la altura : ");
    scanf("%f",&b);
    area=pow(a,2)*3.1415;
    volumen=area*b;
    printf("El area es :%f",area);
    printf("El volumen es :%f",volumen);

    return 0;
}
