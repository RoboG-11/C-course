/*
Suma pares-impares
Sumar 1-2+3-4
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i=1, sum=0, sumP=0, sumI=0, num, neg; //Declaracion de variables
	
	printf("Ingrese el numero total de elementos: "); //Ingreso de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	while(i <= num){ //Ciclo while con condicion
		if(i%2 == 0){ //Condicion para entrar al while
			neg = i * (-1); //Numeros negativos
			sumP = sumP + neg; //Operacion de asignacion
		}else{ //Lo contrario a la condicion 
			sumI = sumI + i;//Operaacion de asignacion
		}
		i++; //Iteracion
	}
	
	sum = sumI + sumP; //Operacion de asignacion
	
	printf("\n"); //Salto de linea
	
	printf("La suma total es: %i", sum); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}

