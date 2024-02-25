#include <stdio.h>

int main(){
	int diaNac, mesNac, anoNac, diaAct, mesAct, anoAct;

	printf("Ingresa tu dia, mes y ano de nacimiento \n");
	scanf("%d %d %d", &diaNac,&mesNac,&anoNac);

	printf("Ingresa el dia, mes y ano actual \n");
	scanf("%d %d %d", &diaAct,&mesAct,&anoAct);

	int edad = anoAct - anoNac;

	if(mesNac < mesAct)
		printf("Tienes %d\n", edad - 1);
	else{
		if(mesNac > mesAct)
			printf("Tienes %d\n", edad-1);
		else{
			if(diaNac > diaAct)
				printf("Tienes %d\n", edad-1);
			else
				printf("Tienes %d\n", edad);
		}
	}

	return 0;
}