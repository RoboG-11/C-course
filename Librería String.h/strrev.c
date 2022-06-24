/*
strrev (Cadena) invertir reverse
Funcion que impreme al contrario una cadena
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char cadena[50]; //Declaracion de arreglos
	
	printf("Ingresa la frase que se invertira: "); //Solicitus de datos
	scanf(" %[^\n]", &cadena); //Escaneo y guardado
	
	printf("\nLa cadena invertida es: "); //Impresion del resultado
	printf("%s", strrev(cadena)); //Impresion del resultado con la funcion de invertir la caneda
	
	return 0; //Se termina el programa
	
}
