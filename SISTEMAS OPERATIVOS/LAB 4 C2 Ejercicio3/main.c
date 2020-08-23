#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
   int notas[10],a,mayor,menor,nota;
   float promedio;
   mayor=0;
   menor=21;
   for(int i=1;i<=10;i++){
    printf("Ingrese la nota :");
    scanf("%d",&nota);
    notas[i]=nota;
    promedio=promedio+notas[i];
    if(notas[i]>mayor ){
        mayor=notas[i];
    }
    if(notas[i]<menor){
        menor=notas[i];
        }
   }
   for(int i =0;i<10;i++){

    printf("Nota %d : %d \n",i+1,notas[i+1]);
   }
   printf("La mayor nota es : %d\n",mayor);
   printf("La menor nota es :% d\n",menor);
   printf("El promedio con dos digitos es de :%.2f\n",promedio/(sizeof(notas)/sizeof(int)));

    return 0;
}

