/*
Letras 
Hacer un bucle do...while para imprimir las letras minusculas del alfabeto
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	char letra = 'a'; //Declaracion de variable de tipo char
	
	do{ //Inicia el ciclo do
		printf("%c\n", letra ); //Impresion de la letra
		letra++; //Incremeto de la letra
	}while(letra <= 'z'); //Condicion 
	
	return 0; //Se termina el programa
	
}
