#include <stdio.h>
#include <unistd.h>
#include "calculadora.h"

void imprimirPuntos() {
    for (int i = 0; i < 3; i++) {
        usleep(750000);
        printf(".");
    }
    usleep(750000);
    printf("\n");
}

void crearProceso() {
    printf("Creando un PROCESO NUEVO \n");
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoEnEjecucion() {
    usleep(1000000);
    printf("Proceso EN EJECUCION \n");
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoEnEspera() {
    usleep(500000);
    printf("Proceso EN ESPERA \n");
    usleep(200000);
    imprimirPuntos(); 
}

void crearProcesoPreparado() {
    usleep(500000);
    printf("Proceso PREPARADO \n");
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoTerminado() {
    usleep(500000);
    printf("Proceso TERMINADO \n");
    usleep(200000);
    imprimirPuntos();
}

int main() {
    crearProceso();
    char oper = menu();

    float numero1, numero2;
    crearProcesoEnEjecucion();
    leerDatos(&numero1, &numero2);

    crearProcesoEnEspera();
    float resultado = oper == '1' ? multiplicacion(numero1, numero2) :
        oper == '2' ? division(numero1, numero2) : -1;
    crearProcesoPreparado();

    printf("Resultado = %f\n", resultado);
    crearProcesoTerminado();

    return 0;

}
