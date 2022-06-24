/*
abecedario
imorimir el alfabeto
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char letra = 'a'; //Declaracion de variable
	
	do{ //Inicia el diclo do
		printf("Letra: %c\n", letra); //Imprime el resultado de cada iteracion
		letra++; //Iteracion
	}while(letra <= 'z'); //Condicion del ciclo do
	
	return 0; //Se termina el programa
}
