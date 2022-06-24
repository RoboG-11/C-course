/*
Punteros con arrays
*/

#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[5] = {1, 2, 3, 4, 5}; //Declaracion e inicializacion del array
	int *apuntadorArray = &array[0]; //Apuntador al inicio del array
	
	while(*apuntadorArray != NULL){ //Ciclo que se puede desplazr por el array sin necedidad de conocer su dimension
		printf("\n%d", *apuntadorArray); //Impresion del contenido del array
		apuntadorArray++; //Se va recorriendo el array por las pocisiones
	}
	
	return 0; //Se termina el programa
	
}
