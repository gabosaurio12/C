#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	int i = 1;
	while(i <= n){
		printf("%d ",4 * i);
		i++;
	}
	printf("\n");

	return 0;
}