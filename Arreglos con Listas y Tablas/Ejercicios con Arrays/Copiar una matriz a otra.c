/*
Copiar una matriz a otra
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int matriz1[2][2]={{1,2} , {3, 4}}; //Declaracion e inicializacion del array
	int matriz2[2][2]; //Declaracion del arreglo
	int i, j; //Declaracion de variables
	
	//Pasar dato por dato
	for(i = 0; i < 2; i++){ //Recorre las filas
		for(j = 0; j < 2; j++){ //Recorre las columnas
			matriz2[i][j] = matriz1[i][j]; //Pasa dato por dato
		}
	}
	
	//Imprime la nueva matriz
	for(i = 0; i < 2; i++){ //Recorre las filas
		for(j = 0; j < 2; j++){ //Recorre las columnas
			printf("%i ", matriz2[i][j]); //Impime valor por valor
		}
		printf("\n"); //Salto de linea 
	}
	
	return 0; //Se termina el programa
	
}
