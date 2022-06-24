/*
Numeros primos
Determinar si un numero es primo
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, cont=0, i; //Declaracion e inicializacion de variables
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num); //Escanea y guarda los datos
	
	for(i = 1; i <= num; i++){ //Ciclo for
		if(num%i==0){ //Condicion if
			cont++; //Iteracion
		}
	}
	//Si numero es divisible en mas de dos ocaciones, el contador sera mayor de 2
	if(cont>2){ //Condicion if
		printf("\nTu numero NO es primo"); //Impresion del resultado
	}else{ //Lo contrario del if
		printf("\nTu numero ES primo"); //Impresion del resultado
	}

	return 0; //Termina el programa
}
