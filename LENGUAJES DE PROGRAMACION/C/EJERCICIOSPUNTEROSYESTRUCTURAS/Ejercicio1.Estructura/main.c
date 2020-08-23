#include <stdio.h>
#include <stdlib.h>


 typedef struct{
     int codigo;
     int nota;
 }alumno;

 void ayuda(alumno a[] ){
     int b;
     int diferencia[]={0,0,0,0,0,0,0,0,0};
     int notamayor=0;
     for(int i=0;i<9;i++){
          if( a[i].nota>=11){
        a[i].nota=a[i].nota;
     }else{
    diferencia[i]=11-a[i].nota;
    a[i].nota=a[i].nota+diferencia[i];
    }
}
    for(int i =0;i<9;i++){
        if(a[i].nota>notamayor){

            b=i;
        }
    }
    for(int i=0;i<9;i++){
        printf("Puntos aumentados: %d\n",diferencia[i]);
    }


    printf("El alumno %d tiene la nota mas alta :%d ",a[b].codigo,a[b].nota);

}


int main()
{
    int codigo[]={1000,1001,1002,1003,1004,1005,1006,1007,1008,1009};
     int notas[]={10,12,18,7,11,12,17,19,20,14};
     alumno alumnos[8];

     for(int i=0;i<9;i++){
        alumnos[i].codigo=codigo[i];
        alumnos[i].nota=notas[i];
     }

     ayuda(alumnos);
    return 0;
}
