/*
Funcion aleatoia
srand(rand(NULL));
variable = limiteInferior + rand()%((limiteSuperior+1)-(limiteInfeior))
*/
#include<stdio.h> //Libreria de entrada y salida

void numRandom(); //Declaracion de variable

int main(){ //Funcion principal
	
	numRandom(); //Llamado de la funcion
	
	return 0; //Se termina el programa
	
}

void numRandom(){  //Acciones de la funcion declarada
	
	int num; //Declaracion de variable
	
	srand(time(NULL)); //Funcion de numero random
	
	num = 1 + rand() % ((10 - 1) - 1); //Operacion y aignacion de numero random
	
	printf("El numero random es: %i", num); //Impresion del resultado
	
}
