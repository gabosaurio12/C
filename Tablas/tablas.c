#include <stdio.h>

int main(){
	int t;
	printf("Programa que imprime las tablas de multiplicar \n");
	printf("Hasta que tabla quieres calcular \n");
	scanf("%d", &t);
	for(int i = 1; i <= t; ++i){
		printf("Tabla del %d\n", i);
		for(int j = 1; j <= 10; ++j){
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}

	return 0;
}
