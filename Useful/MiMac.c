#include <stdio.h>

int main(){
	int precioMac, precioVenta, cantidadVentas;
	printf("Introduce el Precio de la Mac y el Precio de una Venta\n");
	scanf("%d%d", &precioMac, &precioVenta);
	cantidadVentas = precioMac / precioVenta;
	printf("Para comprar tu Mac debes vender %d a %d\n", cantidadVentas, precioVenta);

	return 0;
}
