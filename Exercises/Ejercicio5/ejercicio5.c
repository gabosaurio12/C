#include <stdio.h>

void leerMat(int n, int m[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Ingresa un dato: ");
			scanf("%d", &m[i][j]);
		}
	}
}

int positivos(int n, int m[][n]){
	int pos = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(m[i][j] > -1)
				pos+= 1;
		}
	}
	return pos;
}

int main(){
	int n;
	printf("Ingresa el tamano de la matriz: ");
	scanf("%d", &n);
	int m[n][n];
	leerMat(n,m);
	printf("Numeros positivos %d\n", positivos(n,m));

	return 0;
}