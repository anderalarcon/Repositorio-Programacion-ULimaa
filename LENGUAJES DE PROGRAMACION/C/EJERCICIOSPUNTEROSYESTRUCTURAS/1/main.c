#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    bool estado;
    int *p;
    int v[4]={1,2,3,4,5};
    p=&v;
   for(int i =0;i<=4;i++){
    if(p[i]==3){//aritmetica de puntero
      estado=true;
      break;
    }else{
   estado=false;
    }
   }
   if(estado==true){;
    printf("El numero 3 se encuentra");
   }else{
   printf("EL NUMERO 3 NO SE ENCUENTRA");
   }

    return 0;
}
