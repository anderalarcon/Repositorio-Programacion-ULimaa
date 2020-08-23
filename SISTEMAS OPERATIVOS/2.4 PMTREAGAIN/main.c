#include <stdio.h>
#include <stdlib.h>

struct a{
int codigo;
char apellido[50];
int notas1[2];
int notas2[2];

};
int main()
{
    float aux3,aux4;
    int aux1,aux2;
    struct a alumno[2];
    for(int i =0;i<3;i++){
    printf("Ingrese codigo:");
    scanf("%d",&alumno[i].codigo);
    printf("Ingrese apellido paterno:");
    scanf("%s",&alumno[i].apellido);
    printf("Ingrese nota de lectura 1 :");
    scanf("%d",&alumno[i].notas1[0]);
    aux1=aux1+alumno[i].notas1[0];
    printf("Ingrese nota de lectura 2 :");
    scanf("%d",&alumno[i].notas1[1]);
   aux1=aux1+alumno[i].notas1[1];
    printf("Ingrese nota de lectura 3 :");
    scanf("%d",&alumno[i].notas1[2]);
    aux1=aux1+alumno[i].notas1[2];
    printf("Ingrese nota de PC 1 :");
    scanf("%d",&alumno[i].notas2[0]);
    aux2=aux2+alumno[i].notas2[0];
    printf("Ingrese nota de PC 2 :");
    scanf("%d",&alumno[i].notas2[1]);
     aux2=aux2+alumno[i].notas2[1];
    printf("Ingrese nota de PC 3 :");
    scanf("%d",&alumno[i].notas2[2]);
    aux2=aux2+alumno[i].notas2[2];
         }
    aux3=aux1/2;
    aux4=aux2/2;
    printf("\n");
    system("PAUSE");
    for(int i =0;i<3;i++){
        printf("Nota promedio Controles :%f \n",aux3/3);
        printf("Nota promedio Lectura : %f\n",aux4/3);
        printf(" TA : %f\n",(aux3/3+aux4/3)/2);
    }
    return 0;
}
