#include  <stdio.h> // añadir librerias faltantes
#include   <stdlib.h> // añadir librerias faltantes
#include   <time.h>
#define MAX 10 // QUITAR CORCHETES

int main( )

{
    srand(time(NULL));//aplicar el srand para que los numeros aleatorias sean diferentes utilizando la libreria time.h se logra esto
    int numero ;
    for(int i=0;i<MAX;i++)//faltò i<max ; falto i++ y falto ")" MAX EN MAYUSCULA YA QUE LO DEFINIMOS ASI
    {
      numero = rand() % 100 ;
     printf("n[%d] = %d\n", i, numero) ;//numero ; quitar corchetes[ ]
     }
     return 0 ;

}
