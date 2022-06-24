/*
strlwr (texto) minusculas lower
Convierte a minusculas todas las letras de una cadena de texto
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char texto[50]; //Declaracion del arreglo 
	
	printf("Escribe un texto con mayusculas y minisculas: "); //Solicitud de datos
	scanf(" %[^\n]", &texto); //Escaneo y guardado 
	
	printf("\nEl nuevo texto es el siguiente: "); //Impresion del resultado
	printf("%s", strlwr(texto)); //Impresion del resultado, con la funcion de convertir todo a minusculas
	
	return 0; //Se termina el programa
	
}
