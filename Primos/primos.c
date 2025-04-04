#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero) {
    bool primo = true;
    if (numero == 0 || numero == 1) {
        primo = false;
    } else {
        int i = 2;
        while (primo && i < numero) {
            if (numero % i == 0) {
                primo = false;
            }
            i++;
        }
    }

    return primo;
}

void escribirArchivo(FILE *archivo, int n) {
    if (archivo == NULL) {
        printf("Error al abrir el archivo \n");
    } else {
        fprintf(archivo, "%d ", n);
    }
}

void numerosPrimos(int n, int m) {
    FILE *archivo = fopen("primos.txt", "w");
    for (int k = n; k < m + 1; k++) {
        if (esPrimo(k)) {
            escribirArchivo(archivo, k);
        }
    }

}

int main() {
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    numerosPrimos(n, m);

    return 0;
}
