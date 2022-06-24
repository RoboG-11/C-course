/*
Cantidad de Caracteres

Realice un programa que permita leer una cadena de caracteres y que devuelva el
numero de caracteres que tienen dicha cadena e imprimir dicha cadena al reves
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char palabra[20]; //Declaracion de un char
	int i=0; //Declaracion e inicializacion de una variables
	
	printf("Ingresa la palabra: "); //Solicitud de datos
	scanf(" %[^\n]", &palabra); //Escaneo y guardado en el array
	
	//'\0'->Es lo que hay cuando la palabra termina 
	while(palabra[i] != '\0'){ //Ciclo para contar el numero de letras
		i++; //Contador del numero de letras
	}
	
	printf("\nLa palabra tiene: %i letras", i); //Impresion de la cantidad de letras
	
	printf("\n\nLa palabra escrita al reves es: "); //Formato
	
	while(i >= 0){ //Ciclo de impresion de la palabra al reves
		printf("%c", palabra[i--]); //Impresion de la palabra al reves
	}
	
	return 0; //Se termina el programa
	
}
