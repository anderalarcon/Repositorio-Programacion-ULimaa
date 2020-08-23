#include <stdio.h>
#include <stdlib.h>
#define  N 10

int main()
{
    int a[N],i;
    for(i=0;i<N;i++){
        printf("Ingrese %d numeros:",N);
        scanf("%d",&a[i]);
    }
    for(i=N-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}
