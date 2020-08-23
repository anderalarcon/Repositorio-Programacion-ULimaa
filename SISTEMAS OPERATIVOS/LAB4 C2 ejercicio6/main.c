#include <stdio.h>
#include <stdlib.h>

struct med{
int ancho,largo,alto;
};



int main()
{
int i;

struct med cub[5];

for(i=0;i<5;i++){
        cub[i].alto=4;
        cub[i].ancho=2*i;
        cub[i].largo=i+1;

}
for(i=0;i<5;i++){
        printf("Medidades del cubilete nr %d   Alto : %d ,Ancho : %d ,Largo : %d \n",i+1,cub[i].alto,cub[i].ancho,cub[i].largo);

}

    return 0;
}
