/*
Paso de parametros por valor (No modifica el valor de la variable)
Es el que usamos casi siempre, cuando pasamos una variable a determinada funcion, solo
copia el valor que esta contiene en una memoria temporal, la cual desaparece luego que
la ejecucuon de la funcion termina y la variable original no es modificada.
*/
#include<stdio.h> //Libreria de entrada y salida

void agregar(int a){ //Declaracion de la funcion
	a += 10; //a = a + 10
}

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%d", &num); //Guarda lo ingresado en la variable
	printf("Valor antes de la funcion: %d\n", num); //Impresion de la variable
	agregar(num); //Llama a la funcion
	printf("Valor despues de la funcion: %d", num); //Impresion de la variable
	
	return 0; //Se termina el programa
	
}
