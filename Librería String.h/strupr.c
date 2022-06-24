/*
strupr (cadena) mayusculas uper
Contrario a strlwr, esta funcion convierte a mayusculas las letras de una cadena
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres


int main(){ //Funcion principal
	
	char texto[50]; //Declaracion de arreglo
	
	printf("Escribe un texto con mayusculas y minusculas: "); //Solicitud de datos
	scanf(" %[^\n]", &texto); //Escanea y guarda lo ingresado
	
	printf("\nEl nuevo texto es: "); //Impresion del resultado
	printf("%s", strupr(texto));//Impresion del resultado, con la funcion de convertir todo a mayusculas

	return 0; //Se termina el programa
	
}
