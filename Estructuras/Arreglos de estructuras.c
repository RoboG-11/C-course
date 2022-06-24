/*
Arreglos de estructuras
*/
#include<stdio.h> //Libreria de entrada y salida

struct persona{ //Declaracion de la estructura
	char nombre[20]; //Declaracion de un array
	int edad; //Declaracion de una variable
}persona[5]; //Este array (de 5) cada uno tiene la estructura

int main(){ //Funcion principal
	
	int i; //Declaracion de variable iterativa
	
	for(i = 0; i < 5; i++){ //Ciclo for que recorre todo el array de estructuras
		printf("%i) Ingresa el nombre: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &persona[i].nombre); //Escaneo y guardado de datos
		printf("%i) Ingresa su edad: ", i+1); //Solicitud de datos
		scanf("%i", &persona[i].edad); //Escaneo y guardado de datos
		printf("\n"); //Salto de linea
	}
	
	printf("\n"); //Salto de linea
	
	for(i = 0; i < 5; i++){ //Ciclo que imprime el array
		printf("\n%i) Su nombre es: %s", i+1, persona[i].nombre); //Impresion del array de estructuras
		printf("\n%i) Su edad es: %i", i+1, persona[i].edad); //Impresion del array de estructuras
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
	
}
