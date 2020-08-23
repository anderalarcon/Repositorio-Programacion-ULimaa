#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,kilogramos;
    printf("Ingresa el valor en pulgadas:");
    scanf("%f",&a);
    kilogramos=a*0.454;
    printf("%f pulgadas es %f kilogramos",a,kilogramos);
    return 0;
}
