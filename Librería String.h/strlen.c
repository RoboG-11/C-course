/*
strlen (Cadena) LONGITUD
Devuelve un entero que representa la longitud de una cadena de texto (incluyendo
espacios en blanco, pero excluyendo el caracter nulo = \0)
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char array[100]; //Arreglo de 100 espacios
	
	printf("Escribe lo que quieras: "); //Ingreso del array
	scanf(" %[^\n]", &array); //Escaneo y guardado del array
	
	printf("\nLa longitud de lo ingresado es: %i", strlen(array)); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
