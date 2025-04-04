#include <stdio.h>
#include "calculadora.h"

void leerDatos(float *numero1, float *numero2) {
    printf("Ingresa el numero 1 ");
    scanf("%f", numero1);
    printf("Ingresa el numero 2 ");
    scanf("%f", numero2);
}

float multiplicacion(float multiplicando, float multiplicador) {
    float producto = 0;
    for (int i = 0; i < multiplicador; i++) {
        producto += multiplicando;
    }

    return producto;
}

float division(float divisor, float dividendo) {
    float cociente = 0;
    while (dividendo > 0) {
        dividendo -= divisor;
        cociente++;
    }

    return cociente;
}

char menu() {
    printf("CALCULADORA \n");
    printf("1. Multiplicacion \n");
    printf("2. Division \n");
    printf("3. Salir \n");
    char opc;
    scanf("%c", &opc);

    return opc;
}
