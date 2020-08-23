#include <stdio.h>
#include <stdlib.h>

struct usuario{
    char nombre[50]
int edad;
int altura;

};

int main()
{
   struct usuario a[1];
     for(int i=0;i<2;i++){
        printf("Ingrese edad:");
        scanf("%d",&a[i].edad);
      printf("Ingrese altura:");
        scanf("%d",&a[i].altura);


    }
    printf("d",a[0].edad);

    return 0;
}
