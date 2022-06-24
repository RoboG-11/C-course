/*
Contavilizar vocales

Leer un string con getchar() y contabilizar las vocales
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int c, cont=0; //Declaracion de variables
	
	printf("Ingrese su nombre y luego ctrl + z: "); //solicitud de datos
	while(EOF != (c = getchar())){ //Condicion que cuenta las vocales
		switch (c){ //Menu con la condicion
			case 'a': //Opcion 1
			case 'e': //Opcion 2
			case 'i': //Opcion 3
			case 'o': //Opcion 4
			case 'u': //Opcion 5
			cont++; //Aumenta el contador
		}
	}
	
	printf("El numero de vocales es: %i", cont); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
