#include <stdio.h>

int main(){
	int am40 = 0;
	int aE4050 = 0;
	int aE5060 = 0;
	int aM60 = 0;
	int n;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		int peso;
		scanf("%d", &peso);

		if(peso < 40)
			am40+= 1;
		else{
			if(peso > 60)
				aM60+= 1;
			else{
				if(peso < 50)
					aE4050+= 1;
				else
					aE5060+= 1;
			}
		}
	}

	printf("Menor a 40 %d\nEntre 40 y 50 %d\nEntre 50 y 60 %d\nMayor a 60 %d\n", am40, aE4050, aE5060, aM60);

	return 0;
}