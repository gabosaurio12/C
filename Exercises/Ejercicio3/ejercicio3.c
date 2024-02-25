#include <stdio.h>

int main(){
	int suma = 0;
	int n; int c = 0;
	do{
		scanf("%d", &n);
		suma += n;
		c += 1;
	} while (n > -1);

	suma = suma / c;

	printf("%d\n", suma);

	return 0;
}