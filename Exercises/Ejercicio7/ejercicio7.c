#include <stdio.h>

int digitosEntero (int n){
	if (n < 10)
		return 1;
	else
		return 1 + digitosEntero (n / 10);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", digitosEntero(n));
	return 0;
}