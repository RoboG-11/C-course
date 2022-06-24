/*
Triangulo de asteriscos
Hacer un triangulo con '*'
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i, j; //Declaracion de variables
	
	printf("Ingrese el numero de filas: "); //Solicitud de ingreso
	scanf("%i", &num); //Escanea y guarda lo ingresado
	
	for(i = 0; i < num; i++){ //Ciclo for
		for(j = 0; j <= i; j++){ //Ciclo for anidado
			printf("*"); //Imprime un asterisco
		}
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
}
