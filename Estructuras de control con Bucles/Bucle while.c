/*
Sentencia while

while->mientras

SINTAXIS:
	while(algo){
		Instrucciones;
	}

PRIMERO SE VE SI SE CUMPLEN LAS CONDICIONES Y LUEGO SE EJECUTA
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i = 0; //Declaracion e inicializacion de la variable
		
	while(i <= 100){ //Condicion While
		printf("El valor es: %i\n", i); //Impresion del resultado
		i++; //Incremento de +1
	}
	
	return 0; //Se termina el programa
}
