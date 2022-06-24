/*
Multiplicacion con punteros

Escribe un programa que mediante una funcion modifique los valores de un
arreglo bidimensional de 5x4 con valores iniciales dados por el usuario,
duplicando (multiplicando x2) los valores de los renglones pares (0, 2, 4)
y multiplicando x3 los renglones impares(1, 3).
*/
#include<stdio.h> //Libreria de entrada y salida

void multiplicar(); //Declaracion de funcion
int *point; //Declaracion de puntero

int main(){ //Funcion principal
	
	int arreglo[5][4]; //Declaracion de array
	int i, j; //Declaracion de variables
	
	point = &arreglo[0][0];  //Apuntador al inicio del array
	
	//Ciclo que recorre todo el array
	for(i = 0; i < 5; i++){ //Ciclo que recorre los renglones
		for(j = 0; j < 4; j++){ //Ciclo que recorre las columnas
			printf("Ingresa el valor de [%i][%i]: ", i, j); //Solicitud de datos
			scanf("%i", &arreglo[i][j]); //Se guarda lo ingresado en el array
		}
	}
	
	printf("\n\nAsi quedo el arreglo...\n"); //Formato
	
	//Ciclo que recorre todo el array
	for(i = 0; i < 5; i++){ //Ciclo que recorre los renglones
		for(j = 0; j < 4; j++){ //Ciclo que recorre las columnas
			printf("[%i]", arreglo[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
	multiplicar(); //Se llama a la funcion
	printf("\n"); //Salto de linea
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre los renglones
		for(j = 0; j < 4; j++){ //Ciclo que recorre las columnas
			printf("[%i]", arreglo[i][j]); //Impresion del array
		}
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
	
}

void multiplicar(){ //Funcion que multiplica el array
	
	int i; //Declaracion de variable
	
	for(i = 0; i < 20; i++){ //Ciclo que recorre todo el array
		if(i < 4 || i >= 8 && i < 12 || i >= 16 && i < 20){ //Condicion de pares
			*(point + i) *= 2; //Operacion con apuntadores
//			*(point + i) = *(point + i)*2;		
		}
		if(i>=4 && i < 8 || i >= 12 && i < 18){ //Condicion de impares
			*(point + i) *= 3; //Operacion con apuntadores
//			*(point + i) = *(point + i)*3;
		}
	}
	
}
