/*
Bucle for

SINTAXIS:
for(inicializacion; condicion; incremento){
	Instrudcciones;
}
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i; //Declaracion de la variable
	
	for(i = 0; i <= 10; i++){ //ciclo for
		printf("%i\n", i); //Instrucciones del ciclo
	}
	
	return 0; //Termina el programa
}
