/*
Ingreso de datos en estructuras
*/
#include<stdio.h> //Libreria de entrada y salida

struct persona{ //Declaracion de una estructura
	char nombre[20]; //Declaracion de una variable de tipo char
	int edad; //Declaracion de una variable de tipo entera
}
persona1, //Declaracion con la estructura
persona2; //Declaracion con la estructura

int main(){ //Funcion principal
	
	printf("Ingresa el nombre de la primer persona: "); //Solicitud de datos
	scanf(" %[^\n]", &persona1.nombre); //Guardado en la estructura y su variable
	printf("Ingresa la edad de la primer persona: "); //Solicitud de datos
	scanf("%i", &persona1.edad); //Guardado en la estructura y su variable
	
	printf("\nIngresa el nombre de la segunda persona: "); //Solicitud de datos
	scanf(" %[^\n]", &persona2.nombre); //Guardado en la estructura y su variable
	printf("Ingresa la edad de la segunda persona: "); //Solicitud de datos
	scanf("%i", &persona2.edad); //Guardado en la estructura y su variable
	
	printf("\nEl nombre de la primer persona es: %s", persona1.nombre); //Impresion de lo guardado en estructura
	printf("\nLa edad de la primer persona es: %i", persona1.edad); //Impresion de lo guardado en estructura
	
	printf("\n\nEl nombre de la segunda persona es: %s", persona2.nombre); //Impresion de lo guardado en estructura
	printf("\nLa edad de la segunda persona es: %i", persona2.edad); //Impresion de lo guardado en estructura
	
	return 0; //Se termina el programa
	
}
