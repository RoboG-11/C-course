/*
Funciones sin retorno de valor
void nombreFuncion(parametros){
	instrucciones
}
*/
#include<stdio.h> //Libreria de entrada y salida

void mundo(); //Declaracion de la funcion

int main(){ //Funcion principal
	
	mundo(); //Uso de la funcion
	
	return 0; //Se termina el programa
	
}

void mundo(){ //Acciones de la funcion declarada

	printf("Hola mundo :D"); //Impresion
	
}
