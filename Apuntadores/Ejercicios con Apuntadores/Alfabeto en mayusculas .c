/*
Impresion del alfabeto 
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char letra; //Declaracion de variable
	char *pLetra = &letra; //Declaracion de puntero en la pocision de la letra
	
	for(letra = 'A'; letra <= 'Z'; letra++){ //Ciclo que recorre el abecedario
		printf("%c\n", *pLetra); //Impresion de letra por letra
	}
	
	return 0; //Se termina el programa
	
}
