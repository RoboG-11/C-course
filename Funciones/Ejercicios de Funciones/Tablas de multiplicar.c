/*
Tablas de multiplicar
Hacer una tabla de multiplicar hasta el 20, de un numero cualquiera
*/
#include<stdio.h> //Libreria de entrada y salida

void tabla(int num); //Declaracion de funcion

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("Ingrese un numero: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	tabla(num); //Llamado de la funcion
	
	return 0; //Se termina el programa
	
}

void tabla(int num){ //Instrucciones de la funcion
	
	int i; //Declaracion de variable
	
	for(i = 0; i <= 20; i++){ //Ciclo for con 20 repeticiones
		printf("\n%i * %i = %i", num, i, num * i); //Impresion de las repeticiones 
	}//												 con el resultado
	
}
