/*
Suma de matrices
*/
#include<stdio.h> //Libreria de entrada y salida

void sumar(int matriz1[2][2], int matriz2[2][2]); //Declaracion de la funcion

int main(){ //Fucion principal
	
	int matriz1[2][2]={{1,2},{2,1}}, matriz2[2][2]={{2,1}, {1, 2}}; //Declaracion de las matriz
	
	sumar(matriz1, matriz2); //Llamado a la funcion
	
	return 0; //Se termina el programa
	
}

void sumar(int matriz1[2][2], int matriz2[2][2]){ //Funcion de la suma
	
	int suma[2][2]; //Declaracion del array
	int i, j; //Declaracion de variables iterativas
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas
		for(j = 0; j < 2; j++){ //Ciclo que recorre las columnas
			suma[i][j] = matriz1[i][j] + matriz2[i][j]; //Suma y guardado del dato
		}
	}
	
	printf("La suma es..\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas
		for(j = 0; j < 2; j++){ //Ciclo que recorre las columnas
			printf("\t%i", suma[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
}
