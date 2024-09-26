#include <stdio.h>

int main() {
	int x, y, resultado;
	
	printf("Teclea el primer numero \n");
	scanf("%d", &x);
	printf("Teclea el segundo numero \n");
	scanf("%d", &y);

	resultado = x + y + 92;

	printf("El resultado es: %d \n", resultado);

	return 0;
}
