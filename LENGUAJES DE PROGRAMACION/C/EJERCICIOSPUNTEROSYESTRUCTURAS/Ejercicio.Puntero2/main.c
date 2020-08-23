#include <stdio.h>
#include <stdlib.h>
void reversa_medio(int *a){
  for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }

    for(int i=9;i>=5;i--){
        printf("%d",a[i]);
    }
}

int main()
{
    int arreglo[9];
    int *p;
    p=&arreglo;
    for(int i =0;i<10;i++){
   printf("Ingrese un numero:\n");
   scanf("%d",&p[i]);
   }
   reversa_medio(p);
    return 0;
}
