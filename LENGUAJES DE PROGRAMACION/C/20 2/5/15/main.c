#include <stdio.h>
#include <stdlib.h>

typedef struct{
char*nombre;
char*apellido;

}persona_nombre;

typedef struct{//lo mismo que struct alumno char*=string
    persona_nombre nombre ;
    int codigo;
    int nota;

}alumno;


int main()
{
    int i ;
    int cod=100;
    alumno clase[3];//arreglo llamado clase de tipo alumno
    int tam_cadena=15;
    for(i=0;i<3;i++){//solo hacer esto cuando llamo de un structu a otro
        clase[i].nombre.nombre=malloc(sizeof(char)*tam_cadena);//hacer esto primero si quiero hacer
        clase[i].nombre.apellido=malloc(sizeof(char)*tam_cadena);

    }
    for(i=0;i<3;i++){
        printf("Ingrese nombre:");
        scanf("%s",clase[i].nombre.nombre);//no usamos aperson xq pasamos referencia de memoria directanmente
        printf("Ingrese apellido:");
        scanf("%s",clase[i].nombre.apellido);
        clase[i].codigo=cod;
        cod++;
        printf("Ingresa nota :");
        scanf("%d",&clase[i].nota);//aca uso xq no declare *
    }
    for(i=0;i<3;i++){

        printf("El nombre es %s\n",clase[i].nombre.nombre);
        printf("El apellido es %s\n",clase[i].nombre.apellido);
        printf("La nota es: %d\n",clase[i].nota);
        printf("El codigo es %d\n",clase[i].codigo);
    }


    return 0;
}
