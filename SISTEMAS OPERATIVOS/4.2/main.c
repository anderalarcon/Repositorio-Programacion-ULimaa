#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0;

	printf("Este programa suma una serie de enteros.\n");
	printf("Ingrese enteros (ponga 0 para terminar):");

	scanf("%d", &n);
	while (n != 0){
		sum += n;
    scanf("%d", &n);
	}
	printf("La suma es: %d\n", sum);

    return 0;
}
