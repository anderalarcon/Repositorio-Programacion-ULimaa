#include <stdio.h>
#include <stdlib.h>

struct persona{
    int codigo;
    char nombre[50];
    char apellido[50];
    int notas1[2];
    int notas2[2];

};
int main()
{
    float aux1,aux2,aux3,aux4;
    int prom1,prom2;
    prom1=0;
    prom2=0;
    struct persona a[1];
    for(int i =0;i<2;i++){
    printf("Ingrese codigo del alumno [%d] :",i+1);
    scanf("%d",&a[i].codigo);

    printf("Ingrese nombre del alumno [%d] :",i+1);
    scanf("%s",&a[i].nombre);

    printf("Ingrese apellido paterno del alumno [%d] :",i+1);
    scanf("%s",&a[i].apellido);

    printf("\n");

    printf("Ingrese nota de control de lectura #1 del alumno [%d] :",i+1);
    scanf("%d",&a[i].notas1[0]);
    prom1=prom1+a[i].notas1[0];


    printf("Ingrese nota de control de lectura #2 del alumno [%d] :",i+1);
    scanf("%d",&a[i].notas1[1]);
    prom1=prom1+a[i].notas1[1];

    printf("Ingrese nota de control de lectura #3 del alumno [%d] :",i+1);
    scanf("%d",&a[i].notas1[2]);
    prom1=prom1+a[i].notas1[2];
    printf("\n");

    printf("Ingrese nota de PC #1 del alumno [%d]:",i+1);
    scanf("%d",&a[i].notas2[0]);
    prom2=prom2+a[i].notas2[0];


    printf("Ingrese nota de PC #2 del alumno [%d]:",i+1);
    scanf("%d",&a[i].notas2[1]);
    prom2=prom2+a[i].notas2[1];


    printf("Ingrese nota de PC #3 del alumno [%d]:",i+1);
    scanf("%d",&a[i].notas2[2]);
    prom2=prom2+a[i].notas2[2];
    printf("\n");
    }

    aux1=prom1/2.0;//2 alumnos
    aux2=prom2/2.0;

    aux3=aux1/3.0;//3 notas
    aux4=aux2/3.0;
    printf("\n");
    for(int i =0;i<2;i++){
    printf("-------------------------------------------------------------------------------\n");

    printf("El promedio de controles de lectura del alumno [%d] es : %f \n",i+1,aux3);
    printf("El promedio de las PCs del alumno  [%d] es : %f\n",i+1,aux4);
    printf("La TA del alumno [%d] es : %f \n",i+1,(aux3+aux4)/2);
    printf("-------------------------------------------------------------------------------\n");

    }


    return 0;
}
