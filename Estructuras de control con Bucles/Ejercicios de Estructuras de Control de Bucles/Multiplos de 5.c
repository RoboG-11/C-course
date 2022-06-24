/*
Multiplos de 5
Poner todos los nultiplos de 5 de 1 hasta el numero ingresado
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int n, i; //Declaracion de variables
	
	printf("Ingresa el numero hasta el que quieres que se calcule los multiplos de 5: "); //Solicitud de datos
	scanf("%i", &n); //Escanea y guarda lo ingresado
	
	i = 1; //Inicializacion de la variable iterativa
	
	while(i <= n){ //While con condicion
		if(i%5 == 0){ //If con condicion
			printf("%i es un multiplo de 5\n", i); //Impresion del resultado
		}
		i++; //Incremento del iterador
	}

	return 0; //Se termina el programa
}
