/*
Espresion condicional operador '?'

Condicion ? Expresion 1: Expresion 2;
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	int numero; //Declaracion de variable entera
	
	printf("Escribe un numero: "); //Entrada de datos
	scanf("%i", &numero); //Escanea y guarda lo ingresado
	
	(numero%2 == 0) ? printf("\nEl numero es par") : printf("\nEl numero es impar"); //Impresion de la codicion
	
	return 0; //Termina el programa
}
