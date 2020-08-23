#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int max=10,a;
    int arreglo[max];
    for(int i =0;i<max;i++){
        a=rand()%100+1;
        arreglo[i]=a;
    }
    for(int i =0;i<max;i++){
       printf("%d\n",arreglo[i]);
    }

    return 0;
}
