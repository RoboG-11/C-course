/*
Intercambiar nombre

Hacer 2 array de cadena de caracteres, almacenar 2 nombres en los arrays y luego
intercambiar el contenido de estos
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones para strings
#define TAM 20 //Se define una macro con un valor de 20

int main(){ //Funcion principal
	
	char aux[TAM], name1[TAM], name2[TAM]; //declaracion de arrays
	
	printf("Ingresa el primer nombre: "); //Solicitud de nombres
	scanf(" %[^\n]", &name1); //Escaneo y guardado de lo ingresado
	printf("Ingresa el segundo nombre: "); //Solicitud de nombres
	scanf(" %[^\n]", &name2); //Escaneo y guardado de lo ingresado
	
	strcpy(aux, name1); //Funcion que copia el name1 al array auxiliar
	strcpy(name1, name2); //Funcion que guarda el name2 en el array1
	strcpy(name2, aux); //Funcion que guarda el name1 (aux) en el array 2
	
	printf("\nEl primer nombre es: %s", name2); //Impresion del array 2
	printf("\nEl segundo nombre es: %s", name1); //Impresion del array 1
		
	return 0; //Se termina el programa
	
}
