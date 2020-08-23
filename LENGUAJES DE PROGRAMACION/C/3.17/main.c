#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a ,b;
    b=rand()%3+1;
   printf("Tijera(0) , Roca(1) ,Papel (2) :");
   scanf("%d",&a);
   if(a==0 && b==0){
    printf("Empate\n");
      printf("La computadora eligigio %d ",b);
   }else if (a==0 && b==1){
       printf("Perdiste\n");
         printf("La computadora eligigio %d ",b);
   }else if (a==0 && b==2){
       printf("Ganaste\n");
         printf("La computadora eligigio %d ",b);
   }
   else if (a==1 && b==0){
       printf("Ganaste\n");
         printf("La computadora eligigio %d ",b);
   }else if (a==1 && b==1){
        printf("Empate\n");
          printf("La computadora eligigio %d ",b);
   }else if (a==1 && b==2){
       printf("Perdiste\n");
         printf("La computadora eligigio %d ",b);
   }else if (a==2 && b==0){
       printf("Perdiste\n");
         printf("La computadora eligigio %d ",b);
   }else if (a==2 && b==1){
       printf("Ganaste\n");
         printf("La computadora eligigio %d ",b);
   }else if (a==2 && b==2){
         printf("Empate\n");
   }




    return 0;
}
