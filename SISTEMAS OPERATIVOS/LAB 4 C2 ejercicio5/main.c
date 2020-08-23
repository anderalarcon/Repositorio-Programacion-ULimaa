#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct j{
    char nombre[50];
    float altura;
    int edad;

};
int main()
{
    struct  j jugador1 ;
    strcpy(jugador1.nombre,"Anderson Cr7");
    jugador1.altura=1.70;
    jugador1.edad=21;

    printf("El nombre es  :%s\n",jugador1.nombre);
    printf("La altura es :%f\n",jugador1.altura);
    printf("La edad es : %d\n",jugador1.edad);


    return 0;
}
