#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void mostrar(int a[],int b){
    for(int i =0;i<b;i++){
        printf("Nota [%d] = %d\n",i+1,a[i]);
    }
}

void media(int a[],int c){
    float b;
    for(int i =0;i<c;i++){
        b=b+a[i];
    }
    printf("El promedio de notas es :%f\n",b/40);
}

void menor(int a[],int b){
    int m=9999;
     for(int i =0;i<b;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    printf("La menor nota es :%d \n",m);
}

void mayor(int a[],int b){
    int m=0;
     for(int i =0;i<b;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    printf("La mayor nota es:%d \n",m);
}




int main(){
    bool estado=false;
    int b;
    int a[b],o,alumnos;
    printf("Ingrese el numero de alumnos:");
    scanf("%d",&alumnos);
    if(alumnos>0 && alumnos<=100){
    b=alumnos;
    for(int i =0;i<b;i++){
        printf("Ingrese la nota del alumno[%d]:",i+1);
        scanf("%d",&a[i]);
        if(a[i]<0){
            break;
        }
    }

    while(estado==false){
    printf("1.Listar Notas\n");
    printf("2.Calcular media\n");
    printf("3.Calcular menor\n");
    printf("4.Calcular Mayor\n");
    printf("5.Salir\n");
    printf("Increse una opcion:\n");
    scanf("%d",&o);
        switch(o){
                case 1:
                    mostrar(a,b);
                    break;
                case 2:
                    media(a,b);
                    break;
                case 3:
                    menor(a,b);
                    break;
                case 4:
                    mayor(a,b);
                    break;
                case 5:
                    estado=true;
                    break;
        }
    }

}else{
    printf("Ingrese una numero mayor a 0 o menor a 100");

}
return 0;
}
