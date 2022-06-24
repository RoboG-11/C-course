/*
Arrays bidimencionales

int tabla[6]={1, 2, 3, 4, 5, 6};
123
456

Filas(hacia abajo)
Columnas(hacia los lados)
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int tabla[2][3]={{1, 2, 3},{4, 5, 6}}; //Declaracion e inicializacion del arreglo
	
	printf("El contenido del array bidimencional es: "); //Formato
	printf("\n%i", tabla[0][0]); //Impresion del contenido en la posicion del array
	printf("\n%i", tabla[0][1]); //Impresion del contenido en la posicion del array
	printf("\n%i", tabla[0][2]); //Impresion del contenido en la posicion del array
	printf("\n%i", tabla[1][0]); //Impresion del contenido en la posicion del array
	printf("\n%i", tabla[1][1]); //Impresion del contenido en la posicion del array
	printf("\n%i", tabla[1][2]); //Impresion del contenido en la posicion del array
	
	return 0; //Se termina el programa
	
}
