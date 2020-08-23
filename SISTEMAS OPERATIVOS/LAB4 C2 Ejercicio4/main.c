#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Libro{
    char titulo[50];
    char autor [50];
    int codigo;

};
int main()
{
    struct Libro libro1;
    struct Libro libro2;
    strcpy(libro1.titulo," Programacion en C");
    strcpy(libro1.autor,"Andeer");
    libro1.codigo=20172991;

    strcpy(libro2.titulo," Programacion en C#");
    strcpy(libro2.autor,"Andeer2");
    libro2.codigo=201729912;
    printf("El titulo del libro es : %s \n",libro1.titulo);
    printf("El autor del libro es : %s\n",libro1.autor);
    printf("El codigo del libro es : %d\n",libro1.codigo);
    printf("\n");
    printf("El titulo del libro2 es : %s\n ",libro2.titulo);
    printf("El autor del libro2 es : %s\n",libro2.autor);
    printf("El codigo del libro2 es : %d\n",libro2.codigo);


    return 0;
}
