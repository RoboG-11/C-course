/*
Copiar un array de un string
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones para cadena de caracteres

int main(){ //Funcion principal
	
	char nombre1[15], nombre2[15]; //Declaracion de los arrays
	
	printf("Escribe tu nombre: "); //Solicitud de datos
	scanf(" %[^\n]", &nombre1); //Escaneo y guardado de los datos
	
	strcpy(nombre2, nombre1); //Funcion para copiar strings
	
	printf("\nTu nombre es: %s", nombre2); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
