#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int a ,b,c;
    a=rand()%100+1;
    b=rand()%100+1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("Ingrese la suma de estos dos numeros:");
    scanf("%d",&c);
    printf("El resultado es : %d ",c);
    return 0;
}
