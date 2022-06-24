/*
Descuento de compra
Una tienta ofrece un descuento del 15% sobre el total de la compra y un cliente 
desea saber cuanto debera de pagar finalmente por su compra
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float precioInicial, descuento, precioFinal; //Declaramos las variables

	printf("Ingresa el precio total: "); //Ingreso de datos
	scanf("%f", &precioInicial); //Escaneo y guardado de datos
	
	descuento = precioInicial * 0.15; //Operacion de asignacion
	precioFinal = precioInicial - descuento; //Operacion de asignacion
	
	printf("El precio con el descuento es de: $%.2f", precioFinal); //Impresion del resultado
	
	return 0; //Finaliza el programa
}
