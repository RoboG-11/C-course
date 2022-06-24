/*
Suma de los 10 primeros numeros pares
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, suma=0; //Declaracion de variables
	
	for(i = 0; i <= 10; i = i + 2){ //Ciclo for
		suma = suma + i; //Operacion de asigancion 
	}
	
	printf("La suma total es: %i", suma); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}

