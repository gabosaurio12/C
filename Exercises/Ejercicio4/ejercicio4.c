#include <stdio.h>

int mcd(int a, int b){
	while (a != b){
		if (a > b)
			a -= b;
		else
			b -= a;		
	}
	return a;
}

int main(){
	int n1,n2,mcd2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	mcd2 = mcd(n1,n2);
	printf("El MCD de %d y de %d es %d\n", n1, n2, mcd2);

	return 0;
}