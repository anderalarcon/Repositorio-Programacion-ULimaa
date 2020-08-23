#include <stdio.h>
#include <stdlib.h>

void mayor(int a, int b, int c){
    if (a>b && a >c){
        printf("El mayor es %d",a);
    }else if (b>a && b>c){
        printf("El mayor es &d",b);
    }else{
    printf("El mayor es %d",c);
    }
}


int main()
{
    int a,b,c;
    printf("Ingrese los 3  numeros:");
    scanf("%d %d %d",&a,&b,&c);
    mayor(a,b,c);
}
