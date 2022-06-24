/*
Multiplos de 5
Imprimir los multiplos de 5 desde 1 hasta n
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i; //Declaracion de variables
	
	printf("Ingrese el total de elementos: "); //Solicitud de datos
	scanf("%i", &num); //Escanea y guarda lo ingresado
	
	i = 1; //Inicializacion de la variable
	
	while(i <= num){ //Ciclo while con condicion
		if(i%5 == 0){ //Concidion if
			printf("%i\n", i); //Impresion del resultado
		}
		i++; //Incremento de la iteracion
	}
	
	return 0; //Se termina el programa
	
}
