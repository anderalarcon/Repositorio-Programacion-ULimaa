#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tope,a,i;
    tope=128;
    printf("Ingrese el valor :");
    scanf("%d",&a);

    printf(" %d: ",a);
    for(i=0;i<=7;i++){
        if(a>=tope){
                a=a-tope;
            printf("1");
        }else{
        printf("0");
        tope=tope/2;
    }

}
return 0 ;
}



