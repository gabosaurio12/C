#include <stdio.h>

void leerArr (int a[], int n){
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

int sumaRecur (int n, int *apu){
	if (n > -1)
		return *apu + sumaRecur (n-1,apu+1);
	else
		return 0;
}

int main(){
	int n;
	printf("Ingresa n ");
	scanf("%d", &n);
	int arreglo[n];
	int *apu = arreglo;

	leerArr(arreglo,n);
	printf("La suma del arreglo es %d\n", sumaRecur(n,apu));

	return 0;
}