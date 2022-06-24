/*
Arrays Multidimensionales
*/
#include<stdio.h> //Libreria de entrada y salida

int main (){ //Funcion principal
	
	int i, j, array[2][3] = {1, 2, 3, 4, 5, 6}; //Declaracion del arreglo
	int a, b, c, arreglo[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //Declaracion del arreglo
	
	printf("Arreglo bidimencional: \n\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas/renglones
		for(j = 0; j < 3; j++ ){ //Ciclo que recorre las columnas
			printf("\t%i", array[i][j]); //Impresion de array
		}
		printf("\n"); //salto de linea mamalon
	}
	
	printf("\n\nArreglo tridimencional: \n"); //Formato
	
	for(a = 0; a < 2; a++){ //Ciclo que recorre las dimensiones
		for(b = 0; b < 2; b++){ //Ciclo que recorre las filas/renglones
			for(c = 0; c < 3; c++){//Ciclo que recorre las columnas
				printf("\t%i", arreglo[a][b][c]); //Impresion de array
			}
			printf("\n"); //salto de linea mamalon
		}
		printf("\n"); //salto de linea mamalon
	}
	
	return 0; //Se termina el programa
	
}
