#include <stdio.h>
#include <stdlib.h>
void funcion(int *puntero){//paso por direccion no por valor
    int *q;
    printf("Valor original i %d\n",*puntero);       //*p --> valor p
                                                 //&p --> direccion p
    q=puntero;
    printf("Valor direccion de p:%d\n",puntero);
    *puntero=20;
    printf("Valor direccion de p nuevo :%d\n",*puntero);



}


int main()
{

    int *p;
    int i=10;
    p=&i;
    printf("%d\n",i);
    printf("%d\n",&i);
    printf("%d\n",p);
    printf("\n");
    funcion(p);
    printf("Valor de i %d",i);

    //*--> da valor
    //& --> da direccion de memoria
    return 0;
}
