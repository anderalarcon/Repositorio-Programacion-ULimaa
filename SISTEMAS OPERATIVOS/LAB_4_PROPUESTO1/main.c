#include <stdio.h>
#include <stdlib.h>

int factorial(int a){
if (a==1){
    return 1;
}else{
    return a*factorial(a-1);
    }
}

int main()
{
    int a ,b;
    printf("Ingrese el numero :");
    scanf("%d",&a);
    b=factorial(a);
    printf("El factorial de %d es : %d ",a,b);
    return 0;
}
