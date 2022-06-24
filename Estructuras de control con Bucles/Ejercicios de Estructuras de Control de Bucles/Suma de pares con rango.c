/*
Suma de pares con rango
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int inicio, final, suma=0; //Declaracion e inicializacion de variables
	
	printf("Igrese el inicio: "); //Ingreso de datos
	scanf("%i", &inicio); //Escaneo y guardado de datos
	printf("Ingrese el fina: "); //Ingreso de datos
	scanf("%i", &final); //Escaneo y guardado de datos
	
	while(inicio <= final){ //Ciclo while con condicion
		if(inicio%2 == 0){ //Condicion para entrar al while
			suma = suma + inicio; //Operacion de aignacion
		}
		inicio++; //Iteracion
	}
	
	printf("\nLa suma de pares es: %i", suma); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
