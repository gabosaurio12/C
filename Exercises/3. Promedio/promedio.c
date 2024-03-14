#include <stdio.h>

int main(){
	int suma = 0;
	int n;
    int c = 0;
    printf("Numero < 1 para salir \n");
	do{
        printf("Numero: ");
		scanf("%d", &n);
		suma += n;
		c += 1;
	} while (n > -1);

	suma = suma / c;

	printf("Promedio %d\n", suma);

	return 0;
}
