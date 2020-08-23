#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct  {
int codigo;
char * nombre;
int nota;

int auxcodigo;
char * auxnombre;
int auxnota;


}alumno;

void funcion(alumno a []){


for(int i=0;i<4;i++){
    for(int j=i;j<3;j++){
        if(strcmp(a[i].nombre,a[j].nombre)>0){
            strcpy(a[i].auxnombre,a[j].nombre);
            strcpy(a[j].nombre,a[i].auxnombre);

    }
    }



}



for(int i =0;i<4;i++){

    printf("%s",a[i].nombre);

}
}

int main()
{
    alumno ALUMNOS[3];
    ALUMNOS[0].codigo=1000;
    ALUMNOS[0].nombre="Jorge";
    ALUMNOS[0].nota=15;

    ALUMNOS[1].codigo=1000;
    ALUMNOS[1].nombre="Juan";
    ALUMNOS[1].nota=16;

    ALUMNOS[2].codigo=1002;
    ALUMNOS[2].nombre="Karen";
    ALUMNOS[2].nota=17;

    ALUMNOS[3].codigo=1003;
    ALUMNOS[3].nombre="Ana";
    ALUMNOS[3].nota=20;

    funcion(ALUMNOS);

    return 0;
}
