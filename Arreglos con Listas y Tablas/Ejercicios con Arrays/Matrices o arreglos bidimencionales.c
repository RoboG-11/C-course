/*
Matrices o arreglos bidimencionales

Matrices de enteros
Matrices de flotantes
Matrices de caracteres
*/
#include<stdio.h> //Libreria de entrada y salida

void matrizEntera(); //Declaracion de una funcion
void matrizFlotante(); //Declaracion de una funcion
void matrizCaracter(); //Declaracion de una funcion

int main(){ //Funcion principal
	
	matrizEntera(); //Llamado de la funcion
	matrizFlotante(); //Llamado de la funcion
	matrizCaracter(); //Llamado de la funcion
	
}

void matrizEntera(){ //Funcion de matriz de enteros
	
	int matriz[2][3]={1,2,3 , 4,5,6}; //Declaracion e inicializacion de un array
	int filas, columnas; //Declaracion de variables iterativas
	
	printf("\tMATRIZ DE ENTEROS\n"); //Formato
	
	for(filas = 0; filas < 2; filas++){ //Ciclo que recorre las filas
		for(columnas = 0; columnas < 3; columnas++){ //Ciclo que recorre las columnas
			printf("\t%i", matriz[filas][columnas]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
}

void matrizFlotante(){ //Funciones de matriz flotantes
	
	float matriz[2][3]; //Declaracion de un array
	int i, j; //Declaracion de variables iterativas
	
	printf("\n\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas
		for(j = 0; j < 3; j++){ //Ciclo que recorre las columnas
			printf("Escribe el numero de la matriz[%i][%i]: ", i, i); //Ingreso de datos
			scanf("%f", &matriz[i][j]); //Escaneo y guardado de lo ingresado
		}
		printf("\n"); //Salto de linea
	}
	
	printf("\tMATRIZ DE FLOTANTES\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas
		for(j = 0; j < 3; j++){ //Ciclo que recorre las columnas
			printf("\t%.2f", matriz[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
}

void matrizCaracter(){ //Funciones de matriz de caracter
	
	char matriz[2][3]={{'a','b','c'} , {'d','e','f'}}; //Declaracion e inicializacion de un array
	int i, j; //Declaracion de variables iterativas
	
	printf("\n\n"); //Formato
	
		printf("\tMATRIZ DE CARACTERES\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo que recorre las filas
		for(j = 0; j < 3; j++){ //Ciclo que recorre las columnas
			printf("\t%c", matriz[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
}
