/*
Estructuras en C
Coleccion de uno o mas tipo de elementos, pueden ser de distinto tipo

struct nombreDeLaEstructura{
	char ...
	int ...
	double ...
};
*/
#include<stdio.h> //Libreria de entrada y salida

struct persona{ //Declaracion de la estructura
	char nombre[20]; //Declaracion de variable de tipo char
	int edad; //Declaracion de variable entera
}
persona1={"Brian", 19}, //Declaracion e inicializacion con la estructura
persona2={"Mario", 18}; //Declaracion e inicializacion con la estructura

int main(){ //Funcion principal
	
	printf("Su nombre es: %s", persona1.nombre); //Impresion con estructura
	printf("\nLa edad es: %i", persona1.edad); //Impresion con estructura
	printf("\n\nSu nombre es: %s", persona2.nombre); //Impresion con estructura
	printf("\nLa edad es: %i", persona2.edad); //Impresion con estructura
	
	return 0; //Se termina el programa
	
}
