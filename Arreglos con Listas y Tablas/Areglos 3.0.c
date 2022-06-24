/*
Areglos 3.0
TipoDeDato nombreDelArray[tamanio] = {valor1, valor2, valor3, ..., valorn};
Los incdices inician en el 0 hasta n-1
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[3] = {24, 5, 96}; //Declaracion de un array con 3 indices y valor asignados
	
	printf("Primer valor: %i\n", array[0]); //Impresion de la posicion de array
	printf("Segundo valor: %i\n", array[1]); //Impresion de la posicion de array
	printf("Tercer valor: %i\n", array[2]); //Impresion de la posicion de array
	
	//Manipulacion del valor a nuestro gusto
	array[0] = 54; //Asignacion de un nuevo valor a la pocision 0 del array
	printf("\nEL nuevo valor del indice 0 es: %i", array[0]);  //Impresion de la posicion de array
	
	return 0; //Se termina el programa
}
