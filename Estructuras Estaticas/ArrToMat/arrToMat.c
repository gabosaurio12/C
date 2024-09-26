#include <stdio.h>

int main() {
	int a[16];
	int mat[4][4];

	for (int i = 0; i < 16; i++) {
		a[i] = i + 1;
	}

	for (int i = 0; i < 16; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat[i][j] = a[k];
			k++;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
