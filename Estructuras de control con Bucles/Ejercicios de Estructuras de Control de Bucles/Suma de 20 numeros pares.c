/*
Suma de 20 numeros pares
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, suma=0; //Declaracion e inicializacion
	
	for(i = 1; i <= 20; i++){ //Ciclo for
		if(i%2==0){ //Condicion de ser par
			suma += i; //Operacion y asignacion
		}
	}
	
	printf("El valor de la suma final es de: %i", suma); //Impresion del resultado
	
	return 0; //Termina el programa
}
