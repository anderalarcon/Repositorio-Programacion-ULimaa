#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b;
    printf("Ingrese un numero:");
    scanf("%d",&a);
    for(i=0;i<=255;i++){
        if(i==a){
            b=1;
        }
    }
    if(b==1){
        printf("El numero %d si se encuentre en el rango establecido ",a);
    }else{
        printf("El numero %d no se encuentra en el rango establecido",a);
    }

    return 0;
}
