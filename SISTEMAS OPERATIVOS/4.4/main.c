#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

	printf("Este programa imprime una tabla de cuadrados.\n");
	printf("Ingrese el numero de entradas para la tabla:");
	scanf("%d", &n);

	for (i=1;i <= n; i++)
		printf("%10d%10d\n",i,i*i);

    return 0;
}
