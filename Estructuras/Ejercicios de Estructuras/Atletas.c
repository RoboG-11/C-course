/*
Atletas

Hacer un arreglo de estructura llamada atleta para N atletas que contenga los
siguientes miembors: nombre, pais, num_medallas. Y devuelva los datos (nombre, pais)
del atleta que ha ganado el mayor numero de medallas
*/
#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

struct atleta{ //Arreglo de estructuras
	char nombre[20]; //Declaracion de variable
	char pais[20]; //Declaracion de variable
	int num_medallas; //Declaracion de variable
}atletas[100]; //Array en la estructura

int main(){ //Funcion principal
	
	int i, n, mayor=0, pos; //Declaracion de variables
	
	printf("Ingrese el numero de atletas: "); //Solicitud de datos
	scanf("%i", &n); //Guardado de lo ingresado
	
	for(i = 0; i < n; i++){ //Ciclo que se repite las veces indicadas
		fflush(stdin); //Limpia el buffer de entrada
		printf("%i. Ingresa tu nombre: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &atletas[i].nombre); //Guardado de lo ingresado en la struct
		printf("%i. Ingresa tu pais: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &atletas[i].pais); //Guardado de lo ingresado en la struct
		printf("%i. Ingrese el numero de medallas: ", i+1); //Solicitud de datos
		scanf("%i", &atletas[i].num_medallas); //Guardado de lo ingresado en la struct
		printf("\n"); //Salto de linea
	}
	
	for(i = 0; i < n; i++){ //Ciclo que compara las medallas
		if(atletas[i].num_medallas > mayor){ //Condicion
			mayor = atletas[i].num_medallas; //Asigancion de valor
			pos = i; //Asigancion de valor
		}
	}
	
	printf("\nEl atleta con mas medallas es..."); //Formato
	printf("\nNombre: %s", atletas[pos].nombre); //Impresion de la estructura indicada
	printf("\nPais: %s", atletas[pos].pais); //Impresion de la estructura indicada
	
	return 0; //Se termina el programa
	
}
