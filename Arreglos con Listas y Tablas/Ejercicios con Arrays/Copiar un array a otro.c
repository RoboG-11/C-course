/*
Copiar un array a otro
*/
#include<stdio.h> //Libreria de entrada y salida

void copiadoArray(int array1[], int array2[], int tamanio); //Declaracion de funcion

int main(){ //Funcion principal
	
	int array1[5]={1, 2, 3, 4, 5}; //Declaracion de array principal
	int array2[5]; //Declaracion del array a donde se iran los datos
	
	printf("Copiando array uno al dos..."); //Formato
	copiadoArray(array1, array2, 5); //Copiar un array llamando a una funcion
	
	return 0; //Se termina el programa
	
}

void copiadoArray(int array1[], int array2[], int tamanio){ //Funcion que copiara el array
	
	int i; //Declaracion de la variable iterativa
	
	for(i = 0; i < tamanio; i++){ //Ciclo que recorre todo el array
		array2[i] = array1[i]; //Translado del contenido de un arreglo a otro
	}
	
	for(i = 0; i < tamanio; i++){ //Ciclo que recorre todo el array
		printf("\n[%i] = %i", (i), array2[i]); //Impresion del copiado
	}
	
}
