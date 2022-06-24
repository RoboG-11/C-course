/*
Saldo de celulares
Calcular tarifas de saldo en celulares y poner precios

De 1000 a 1500 Premium
De 500 a 999 Intermedio
De 100 a 499 Basica
*/

#include<stdio.h> //Libreria estandar

#define Tarifa3 "Premium" //Macro, definiedno una variable en todo el programa
#define Tarifa2 "Intermedia" //Macro, definiedno una variable en todo el programa
#define Tarifa1 "Basica" //Macro, definiedno una variable en todo el programa

int main(){ //Funcion principal
	
	float precio; //Definicion de variable
	
	printf("Inngresa el monto que esta dispuesto a pagar: "); //Ingreso de datos
	scanf("%f", &precio); //Escaneo y guardado de datos
	
	if(precio<500 && precio>99){ //Condicion
		printf("La tarifa apta es: %s", Tarifa1); //Impresion de acuerdo a la condicion
	}
	if(precio>=500 && precio<1000){ //Condicion
		printf("La tarifa apta es: %s", Tarifa2); //Impresion de acuerdo a la condicion
	}
	if(precio>=1000 && precio<=1500){ //Condicion
		printf("La tarifa apta es: %s", Tarifa3); //Impresion de acuerdo a la condicion
	}
	
	return 0; //Termina el programa
}
