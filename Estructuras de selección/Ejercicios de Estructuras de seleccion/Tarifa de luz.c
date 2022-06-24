/*
Tarifa de luz
Visulaizar una tarifa de la uz segun el gasto generado.
Para un gasto menor a 1.000Kwxh: la tarifa es de 1.2, 1-000 y 1.850: 1.0 y mayor de
1.850Kwxh: 0.9.
*/
#include<stdio.h> //Libreria de entrada y salida
#define TARIFA1 1.2 //Definicion de una variable
#define TARIFA2 1.0 //Definicion de una variable
#define TARIFA3 0.9 //Definicion de una variable 

int main(){ //Funcion principal
	
	float gasto, tasa; //Declaracion de variables
	
	printf("Ingrese el total de gasto: "); //Solicitud de datos
	scanf("%f", &gasto); //Escanea y guarda lo ingresado
	
	if(gasto < 1000){ //Condicion
		tasa = TARIFA1; //Operacion y asignacion
	}
	if(gasto >= 1000 && gasto >= 1850){ //Condicion
		tasa = TARIFA2; //Operacion y asignacion
	}
	if(gasto > 1850){ //Condicion
		tasa = TARIFA3; //Operacion y asignacion
	}
	
	printf("\n"); //Salto de linea
	
	printf("El total de tasa a pagar es de: %.2f", tasa); //Impresion del resultado
	
	return 0; //Termina el programa
}
