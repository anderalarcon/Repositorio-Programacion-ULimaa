#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
   int notas[30],a,mayor,menor;
   float promedio;
   mayor=0;
   menor=21;
   for(int i=1;i<=30;i++){
    a=rand()%20+1;
    notas[i]=a;
    promedio=promedio+notas[i];
    if(notas[i]>mayor ){
        mayor=notas[i];
    }
    if(notas[i]<menor){
        menor=notas[i];
        }
    printf("Nota %d : %d \n",i,a);
   }
   printf("La mayor nota es : %d\n",mayor);
   printf("La menor nota es :% d\n",menor);
   printf("El promedio con dos digitos es de :%.2f\n",promedio/(sizeof(notas)/sizeof(int)));

    return 0;
}
