#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_decimal ;
   int tope = 128 ;//8 bits

   printf("*Digite numero: ") ;
   scanf("%d",&n_decimal) ;

   printf("%d = ",n_decimal) ;

   for(int i=0;i<=7;i++)
     {
        if (n_decimal>=tope){
            n_decimal -= tope ;
            printf("1") ;
         }
         else printf("0") ;
        tope =tope/ 2 ;
     }

    return 0;
}
