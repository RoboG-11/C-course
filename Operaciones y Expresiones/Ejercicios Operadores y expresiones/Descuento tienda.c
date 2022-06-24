/*
Ejercicio de operadores
En un supermercado por la cuarentena quieren disminuir los precios al 15%
para ayudar a las personas y que no se queden los productos en la tienda. Debes
de dar el precio y el programa debe de dar los precios con el descuento y el descuento
*/

#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float precio, descuento, compraDescuento; //Declaracion de variables flotantes
	
	printf("Ingresa el precio del producto: "); //Ingresa valor
	scanf("%f", &precio); //Escanea y guarda el valor
	
	descuento = precio * 0.15; //Operaciones y asignacion
	compraDescuento = precio - descuento; //Operaciones y asignacion
	
	printf("\nEl descuento es de: %.2f", descuento); //Impresion del resultado
	printf("\nEl precio con el descuento es: %.2f", compraDescuento); //Impresion del resultado
	
	return 0; //Se termina el programa
}
