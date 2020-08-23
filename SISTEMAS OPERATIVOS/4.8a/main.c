#include <stdio.h>
#include <stdlib.h>
void suma(double a, double b){
    printf("La suma es :%lf",a+b);
}
void resta(double a, double b){
    printf("La resta es : %lf",a-b);
}
void multi(double a, double b){
    printf("La multiplicacion es : %lf",a*b);
}
void division(double a, double b){
    printf("La division es : %lf",a/b);
}
int main()
{
    double a ,b;
    printf("Ingrese el primer numero:");
    scanf("%lf",&a);
    printf("Ingrese el segundo numero :");
    scanf("%lf",&b);
    suma(a,b);
    printf("\n");
    resta(a,b);
     printf("\n");
    multi(a,b);
     printf("\n");
    division(a,b);
    return 0;
}
