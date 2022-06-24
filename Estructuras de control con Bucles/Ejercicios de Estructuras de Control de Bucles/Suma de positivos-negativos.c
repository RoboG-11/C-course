/*
Suma de positivos-negativos
Sumar un numero y restar el siguiente: 1-2+3-4+5...
*Impares->posivitos
*Pares->negativos
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int sumaP=0, sumaI=0, num, i, neg, sum, resul=0; //Declaracion e inicializacion de variables
	
	printf("Hasta que numero quieres sumar?: "); //Solicitus de datos
	scanf("%i", &num); //Escanea y guarda los datos
	
	i = 1; //Inicializacion de la variable iterativa
	
	while(i <= num){ //While con condicion
		if(i%2 == 0){ //Condicion if
			neg = i * (-1); //Operacion y asignacion
			sumaP += neg; //Operacion y asignacion
		}else{ //Lo contrario del while
			sumaI += i; //Operacion y asignacion
		}
		i++; //Iteracion de la variable
	}
	
	resul = sumaP + sumaI; //Operacion y asignacion
	
	printf("\nEl resultado de la suma es de: %i", resul); //Impresion del resultado
	
	return 0; //Se termina el programa
}
