/*
Fin de año
Una distribuidora de motocilcletas tiene una promocion de fin de año que consiste en lo
siguiente: las motos marca Honda tienen un descuento de 5%, las de Yamaha del 8% y las
Suzuki del 10%, mientras que las demas marcas tienen el 2%
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char marca[20]; //Declaracion de un arreglo
	float precio, descuento, precioF = 0; //Declaras variables flotantes
	
	printf("Ingresa la marca de la moto: "); //Solicitus de datos
	scanf(" %[^\n]", &marca); //Escaneo y guardado de datos
	printf("Ingresa el precio de la moto: "); //Solicitus de datos
	scanf("%f", &precio); //Escaneo y guardado de datos
	
	if(strcmp(marca, "Honda") == 0){ //Comparacion de la cadena de caracteres y 'si'
		descuento = precio * 0.05; //Operacion y asignacion
		precioF = precio - descuento; //Operacion y asignacion
		printf("El precio final es de: %.2f", precioF); //Impresion de datos 
	}else if(strcmp(marca, "Yamaha") == 0){ //Si no
		descuento = precio * 0.08; //Operacion y asignacion
		precioF = precio - descuento; //Operacion y asignacion
		printf("El precio final es de: %.2f", precioF); //Impresion de datos 
	}else if(strcmp(marca, "Suzuki") == 0){ //Si no
		descuento = precio * 0.01; //Operacion y asignacion
		precioF = precio - descuento; //Operacion y asignacion
		printf("El precio final es de: %.2f", precioF); //Impresion de datos 
	}else { //Caso contrario del if
		descuento = precio * 0.01; //Operacion y asignacion
		precioF = precio - descuento; //Operacion y asignacion
		printf("El precio final es de: %.2f", precioF); //Impresion de datos 
	}
	
	return 0; //Termina el programa
}
