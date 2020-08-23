#include <stdio.h>
#include <stdlib.h>

float funcion(float i ){
if(i==1){
    return 1.0/3.0;
}else{
return (i/(2*i+1)+funcion(i-1));
}
}

int main()

{
    float a ;
    float b;
 printf("Ingrese i :");
 scanf("%f",&a);
 b=funcion(a);
 printf("%f",b);


}


