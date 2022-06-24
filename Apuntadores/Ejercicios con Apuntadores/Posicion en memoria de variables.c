/*
Posicion en memoria de variables

Hacer un variable de tipo int, otra flotante y por ultimo una de tipo char.
Almacenar datos en cada una de las variables, posterioemnere indicar la 
posicion en memoria en donde se encuentran guardados los datos de cada
variable con apuntadores
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int n1 = 10, *pn1 = &n1; //Declaracion e inicializacion de variable con el puntero
	float n2 = 10.5, *pn2 = & n2; //Declaracion e inicializacion de variable con el puntero
	char n3 = 'a', *pn3 = &n3; //Declaracion e inicializacion de variable con el puntero
	
	printf("Variable entera.."); //Formato
	printf("\nDato: %i", *pn1); //Impresion del dato con apuntador
	printf("\nPosicion: %p", pn1); //Impresion de la direccion de memoria con apuntador
	
	printf("\n\nVariable flotante.."); //Formato
	printf("\nDato: %.2f", *pn2); //Impresion del dato con apuntador
	printf("\nPosicion: %p", pn2); //Impresion de la direccion de memoria con apuntador
	
	printf("\n\nVariable caracter.."); //Formato
	printf("\nDato: %c", *pn3); //Impresion del dato con apuntador
	printf("\nPosicion: %p", pn3); //Impresion de la direccion de memoria con apuntador
	
	return 0; //Se termina el programa
	
}
