#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct u{
char nombre [50];
int edad;
float altura;
};
int main()
{
    bool estado=false;
    int o;
    struct u a[3];
    for(int i=0;i<3;i++){
        printf("Ingrese nombre:");
        scanf("%s",&a[i].nombre);
        printf("Ingrese edad:");
        scanf("%d",&a[i].edad);
        printf("Ingrese altura:");
        scanf("%f",&a[i].altura);
    }

    while(estado==false){
    printf("1.Listar nombres\n");
    printf("2.Listar alturas\n");
    printf("3.Listar edades\n");
    printf("4.Salir\n");
    printf("Ingrese opcion:\n");
    scanf("%d",&o);
    switch(o){
                case 1:
                    for(int i=0;i<3;i++){
                    printf("El nombre de la persona[%d] es :%s\n",i+1,a[i].nombre);
                    }
                    break;

                case 2:
                    for(int i=0;i<3;i++){
                    printf("La altura de la persona[%d] es :%f\n",i+1,a[i].altura);
                    }
                    break;

                case 3:
                    for(int i=0;i<3;i++){
                    printf("La edad de la persona [%d] es :%d\n",i+1,a[i].edad);
                    }
                    break;

                case 4:
                    estado=true;
                    break;

    }
    }


    return 0;
}
