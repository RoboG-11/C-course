/*
Multiplicacion de 10
Ingrese un numero, si este supera a 10; multiplique los 10 primeros numeros
sino sumelos
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, sum=0, mult=1, i=1; //Declaracion e inicializacion de variables
	
	printf("Ingrese un numero: "); //Ingreso de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	if(num > 10){ //Condicion if
		while (i <= 10){ //Ciclo while
			mult = mult * i; //Operacion y aignacion
			i++; //Guarda el dato
		}
		printf("\nLa multiplicacion es: %i", mult); //Impresion del resultado
	}else{ //Lo contrario de la condicion
		while(i <= 10){ //Ciclo while
			sum = sum + i; //Operacion y asignacion
			i++; //Guarda el dato
		}
		printf("\nLa suma es: %i", sum); //Impresion del resultado
	}

	return 0; //Se termina el programa
	
}
