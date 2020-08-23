#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Ingrese el primer numero:");
    scanf("%d",&a);
    printf("Ingrese el segundo numero:");
    scanf("%d",&b);
    if(a%b==0){
        printf("%d es divisor entero de %d",b,a);
    }else{
        printf("%d no es divisor entero  de %d",b,a);
    }

    return 0;
}
