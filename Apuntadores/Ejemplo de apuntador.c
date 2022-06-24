/*
Ejemplo de apuntador
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int a = 19; //Declaracion e inicializacion de variable
	int b = 20; //Declaracion e inicializacion de variable
	int *apuntadorA = &a; //Declacion del apuntador a la referencia de las variables
	int *apuntadorB = &b; //Declacion del apuntador a la referencia de las variables
	
	printf("El valor de 'a' es: %i", a); //Impresion del valor de la variable
	printf("\nLa ubicacion en memoria del apuntador es: %p", apuntadorA); //Impresion de la direccion de memoria con apuntador
	printf("\n%d", *apuntadorA); //Impresion del valor de la variable con apuntador
	printf("\n%d", a); //Impresion del valor de la variable
	
	*apuntadorA = 123; //Se cambia el valor de la variable con apuntador
	
	printf("\n%d", a); //Impresion del nuevo valor
	
	return 0; //Se termina el programa
	
}
