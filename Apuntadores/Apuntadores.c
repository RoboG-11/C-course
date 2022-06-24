/*
Apuntadores
Contiene la posicion de memoria de una variable 
El apuntador debe de ser del mismo tipo de dato al que apunta 

tipoDato *nombreApuntador;
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num = 50; //Decleracion e inicalizacion de la variable
	int *pNum; //Declaracion del apuntador
	
	printf("Dato: %i", num); //Impresion del valor de la variable
	printf("\nPosicion: %p", &num); //Impresion de la posicion con '&'
	
	pNum = &num; //&num = posicion en memoria de la variable
	
	printf("\n\nValor de la variable..."); //Formato
	printf("\nDato: %i", num); //Impresion del valor de la variable
	printf("\nDato: %i", *pNum); //Impresion del valor de a variable con el apuntador
	
	printf("\n\nPosicion de memoria..."); //Formato
	printf("\nPosicion: %p", &num); //Imprime la posicion de memoria con '&'
	printf("\nPosicion: %p", pNum); //Imprime la posicion de memoria con el apuntador
	
	return 0; //Se termina el programa
	
}
