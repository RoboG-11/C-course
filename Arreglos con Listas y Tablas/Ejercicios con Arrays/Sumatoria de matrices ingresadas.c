/*
Suma de matrices ingresando datos
*/
#include<stdio.h> //Libreria de entrada y salida

void sumar(int matriz1[50][50],int matriz2[50][50],int filas,int columnas); //Declaracion de funcion

int main(){ //Funcion principal

	int matriz1[50][50],matriz2[50][50]; //Declaracion de array
	int filas, columnas, i, j; //Declaracion de valiables
	
	printf("Ingrese el numero de filas de la matriz: "); //Solicitud de datos
	scanf("%i", &filas); //Escaneo y guardado de datos
	printf("Ingrese el numero de columnas de la matriz: "); //Solicitud de datos
	scanf("%i", &columnas); //Escaneo y guardado de datos
	
	printf("\n"); //Formato
	
	//Generacion de la matriz
	for(i = 0;i < filas; i++){ //Ciclo que recorre todas las filas
		for(j =0;j < columnas; j++){ //Ciclo que recorre tolas las columnas
			printf("Digite el numero matriz1[%i][%i]: ", i, j); //Ingreso de datos
			scanf("%i",&matriz1[i][j]); //Escaneo y guardado de lo ingresado
		}
	}

	printf("\n\n"); //Formato
	
	//Generacion de la matriz
	for(i = 0;i < filas; i++){ //Ciclo que recorre todas las filas
		for(j = 0;j < columnas; j++){ //Ciclo que recorre tolas las columnas
			printf("Digite el numero matriz2[%i][%i]: ", i, j); //Ingreso de datos
			scanf("%i", &matriz2[i][j]); //Escaneo y guardado de lo ingresado
		}
	}

	printf("\nSuma: \n"); //Formato
	
	sumar(matriz1, matriz2, filas, columnas); //Llamdo a la funcion

	return 0; //Se termina el programa
}

void sumar(int matriz1[50][50],int matriz2[50][50],int filas,int columnas){ //Funcion que suma las matrices

	int suma[filas][columnas], i, j; //Declaracion de variables
	
	//Ciclo que suma las matrices
	for(i = 0;i < filas; i++){ //Ciclo que recorre todas las filas
		for(j = 0;j < columnas; j++){ //Ciclo que recorre tolas las columnas
			suma[i][j] = matriz1[i][j] + matriz2[i][j];  //Suma valor por valor
		}
	}
	
	//Ciclo que imprime el resultado
	for(i = 0;i < filas; i++){ //Ciclo que recorre todas las filas
		for(j = 0;j < columnas; j++){ //Ciclo que recorre tolas las columnas
			printf("%i ", suma[i][j]); //Imprime valor por valor
		}
		printf("\n"); //Formato
	}
	
}

