/*
Pocision de memoria de un array

Dado un vector de 10 elementos {1, 2, 3, 4, 4, 7, 8, 9, 5, 4}. Escribir
un programa en C (con punteros) que muestre las direcciones de memoria
de cada elemento
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, n[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4}; //Declaracion de variables
	int *apn; //Declaracion de apuntador
	
	apn = &n[0]; //Declaracion del apuntador en en array
	
	for(i = 0; i < 10; i ++){ //Ciclo que recorre todo el array
		printf("Dato [%i]: %i", i, *apn); //Impresion del dato
		printf("\nPosicion: %p", apn); //Impresion de la direccion de memoria
		printf("\n\n"); //Salto de linea
		apn++; //Aumenta la posicion y cambia el valor
	}
	
	return 0; //Se termina el programa
	
}
