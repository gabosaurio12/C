#include <stdio.h>

int main(){
	int n1, n2, opc, suma, resta, div, mult;

	printf("Que operacion quieres hacer \n");
	printf("1. Suma \n");
	printf("2. Resta \n");
	printf("3. Multiplicacion \n");
	printf("4. Division \n");
	printf("5. Salir \n");
	scanf("%d", &opc);

	while(opc != 5){
		switch(opc){
			case 1:
				printf("Ingresa los dos numeros \n");
				scanf("%d", &n1);
				scanf("%d", &n2);
				suma = n1 + n2;
				printf("%d \n", suma);

			break;

			case 2:
				printf("Ingresa los dos numeros \n");
				scanf("%d", &n1);
				scanf("%d", &n2);
				resta = n1 - n2;
				printf("%d \n", resta);

			break;

			case 3:
				printf("Ingresa los dos numeros \n");
				scanf("%d", &n1);
				scanf("%d", &n2);
				mult = n1 * n2;
				printf("%d \n", mult);

			break;

			case 4:
				printf("Ingresa los dos numeros \n");
				scanf("%d", &n1);
				scanf("%d", &n2);
				div = n1 / n2;
				printf("%d \n", div);

			break;
		}
	}

	return 0;
}