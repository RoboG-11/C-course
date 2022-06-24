/*
Verificacion de array
Verificar que el arreglo este bien construido y se ejecute perfectamente
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[2][3][5]={2, 3, 5, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32,
	34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60}; //Declaracion e 
	//														   inicializacion de array
	int a, b, c; //Declaracion de las variables iterativas
	
	for(a = 0; a < 2; a++){ //Ciclo for que recorre lass dimensiones
		for(b = 0; b < 3; b++){ //Ciclo for que recorre las filas/renglones
			for(c = 0; c < 5; c++){ //Ciclo for que recorre las columnas 
				printf("Arreglo [%i][%i][%i]: %d\n", a, b, c, array[a][b][c]); //Impresion de array
			}
		}
	}

	return 0; //Se termina el programa
	
}
