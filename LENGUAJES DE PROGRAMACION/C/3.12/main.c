#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Ingrese un numero:");
    scanf("%d",&a);
    if(a%5==0 && a%6==0){
        printf("El numero es divisible por 5 y 6");
    }else if(a%5==0 && a%6!=0 || a%5!=0 && a%6==0 ){
        printf("El numero es disible por 5 o 6 pero no ambos");
    }else{
        printf("El numero no es divisble por 5 ni 6");
        }
    return 0;
}
