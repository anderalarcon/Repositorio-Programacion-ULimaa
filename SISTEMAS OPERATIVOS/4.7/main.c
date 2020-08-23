#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla ;
   int a, b ;

   do
    {
        system("clear") ;
        printf("1. Suma\n") ;
        printf("2. Resta\n") ;
        printf("3. Multiplicacion\n") ;
        printf("4. Division\n") ;
        printf("5. Salir\n") ;
        printf("\nOpcion: ") ;
        tecla = getchar() ;
    }
   while(tecla!='1'&&tecla!='2'&&tecla!='3'&&tecla!='4'&&tecla!='5') ;

   switch(tecla)
   {
       case '1': printf("Operacion: Suma\n") ;
                 printf("a = ") ; scanf("%d",&a) ;
                 printf("b = ") ; scanf("%d",&b) ;
                 printf("r = %d",a+b) ;
                 break ;
       case '2': printf("Operacion: Resta\n") ;
                 printf("a = ") ; scanf("%d",&a) ;
                 printf("b = ") ; scanf("%d",&b) ;
                 printf("r = %d",a-b) ;
                 break ;
       case '3': printf("Operacion: Multiplicacion\n") ;
                 printf("a = ") ; scanf("%d",&a) ;
                 printf("b = ") ; scanf("%d",&b) ;
                 printf("r = %d",a*b) ;
                 break ;
       case '4': printf("Operacion: División\n") ;
                 printf("a = ") ; scanf("%d",&a) ;
                 printf("b = ") ; scanf("%d",&b) ;
                 printf("r = %d",a/b) ;
                 break ;
   }
   printf("\nSalida ...\n") ;
    return 0;
}
