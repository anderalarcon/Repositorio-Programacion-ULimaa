#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digits = 0, n;

	printf("Ingrese un entero no negativo:");
	scanf("%d", &n);

	do{
		n/=10;
		digits++;
	} while (n > 0);

	printf("El numero tiene %d digitos.\n", digits);

    return 0;
}
