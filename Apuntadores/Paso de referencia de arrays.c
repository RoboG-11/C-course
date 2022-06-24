/*
Paso de referencia de arrays

Funcion que recibe un array y lo llena

Los arrays SIEMPRE se pasa por parametros por referencia
*/
#include<stdio.h> //Libreria estandar de entrada y salida

void llenar(int array[], int dimension); //Declaracion de funcion que recibe el array

int main(){ //Funcion principal
	
	int i, vector[5]; //Declaracion de variables
	
	llenar (vector, 5); //Se llama a la funcion y se le pasa el array con la dimension
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre e imprime todo el array
		printf("\n[%i]: %i", i, vector[i]); //Impresion del array
	}
	
	return 0; //Se termina el programa
	
}

void llenar(int array[], int dimension){ //Funcion que recibe el array y lo llena
	
	int i; //Declaracion de variable iterativa
	for(i = 0; i < dimension; i++){ //Ciclo que recorre todo el array
		printf("Ingresa el valor [%i]: ", i); //Solicitud de datos
		scanf("%i", &array[i]); //Se guarda lo ingresado en el array
	}
	
}
