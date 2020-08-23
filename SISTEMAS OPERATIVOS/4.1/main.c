#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

	printf("Este programa imprime una tabla de cuadrados.\n");
	printf("Ingrese el numero de entradas para la tabla:");
	scanf("%d", &n);

	i=1;
	while (i<=n)
	{
		printf("%15d%15d\n",i,i*i);
		i++;
	}

    return 0;
}
