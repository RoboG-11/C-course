//Directivas del pre procesador y variables
#include<stdio.h> //Libreria estandar (pide y regresa al usuario)
#define Pi 3.1416 //Macro. Define variables a un valor

int y = 5; //Variable global de tipo entera
int main(){ //Funcion principal
	
	int x = 10; //Variable local de tipo entera
	float suma = 0; //Variable local de tipo flotante, con valor de 0
	
	suma = Pi + x; //Operacion con las variables
	
	printf("La suma es: %.2f", suma); //Imprime el valor de la operacion
	return 0; //Se termina el programa
}

