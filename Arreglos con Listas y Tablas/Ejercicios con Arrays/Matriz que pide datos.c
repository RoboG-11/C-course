/*
Matriz que pide datos

Hacer una matriz de tipo entera preguntando al usuario el numero de filas y de
columnas. Llenar la matriz y luego imprimirla en pantalla
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int filas, columnas, i, j, matriz[50][50]; //Declaracion de las variables
	
	printf("Escribe el numero de filas: "); //Solicitud de datos
	scanf("%i", &filas); //Escaneo y guardado de datos
	printf("Escribe el numero de columnas: "); //Solicitud de datos
	scanf("%i", &columnas); //Escaneo y guardado de datos
	
	printf("\n"); //Salto de linea con formato
	
	for(i = 0; i < filas; i++){ //Ciclo que recorre las filas
		for(j = 0; j < columnas; j++){ //Ciclo que recorre las columnas
			printf("Escibe el numero de la posicion [%i][%i]: ", i, j); //Solicitud de datos
			scanf("%i", &matriz[i][j]); //Escaneo y guardado de datos
		}
	}
	
	printf("\nEl array ingresado es...\n"); //Formato
	
	for(i = 0; i < filas; i++){ //Ciclo que recorre las filas
		for(j = 0; j < columnas; j++){ //Ciclo que recorre las columnas
			printf("\t%i", matriz[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
	
}
