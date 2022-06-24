/*
Pares e impares con memoria
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, a[10]; //Declaracion de varaible
	int *apt; //Declaracion de apuntador
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
		printf("Ingresa el numero a[%i] ", i); //Solicitud de datos
		scanf("%i", &a[i]); //Se guarda lo ingresado
	}
	
	apt = &a[0]; //Se inicializa el apuntador en el inicio del array
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
		if(*apt%2==0){ //Condicion que es par
			printf("\nNumero par: %i", *apt); //Impresion de numero par
			printf("\nPosicion: %p", apt); //Impresion de la direccion de memoria
			printf("\n"); //Salto de linea
		}
		apt++; //Aumenta el valor de la variable
	}
	
	return 0; //Se termina el programa
	
}
