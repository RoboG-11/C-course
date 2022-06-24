/*
Bucle Do-While

SINTAXIS:
do{-> Has
	algo(Instrucciones);
}while(condicion)-> mientras

PRIMERO SE EJECUTA Y LUEGO SE VE SI SE CUMPLEN LAS CONDICIONES
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i; //Declaracion de variables
	
	do{ //Inicio del bucle (Hacer)
		printf("%i\n", i); //Instrucciones del bucle
		i++; //Instrucciones del bucle
	} while(i <= 20); //Condicion del bucle (mientras)
	
	return 0; //Se termina el programa
}


/*
SOLO IMPRIME 1 VEZ, YA QUE NO SE CUMPLE LA CONDICION DADA
#include<stdio.h>

int main(){
	
	int i;
	
	do{
		printf("%i", i);
		i++
	} while(i == 20);
	
	return 0;
}
*/
