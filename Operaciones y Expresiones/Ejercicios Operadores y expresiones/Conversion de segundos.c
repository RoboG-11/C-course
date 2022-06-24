/*
Calcular la cantidad de segundos incluidos en el numero de horas, minutos y
segundos ingresados por el usuario
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int horas, minutos, segundos, t1, t2, t3, segundosTotales; //Declaracion de variables
	
	printf("Ingresa el numero de horas: "); //Ingreso de valores
	scanf("%i", &horas); //Escanea y guardalos valores
	printf("Ingresa el numero de minutos: "); //Ingreso de valores
	scanf("%i", &minutos); //Escanea y guardalos valores
	printf("Ingresa el numero de segundos: "); //Ingreso de valores
	scanf("%i", &segundos); //Escanea y guardalos valores
	
	t1 = horas * 3600; //Operacion y asiganacion
	t2 = minutos * 60; //Operacion y asiganacion
	t3 = segundos * 1; //Operacion y asiganacion
	
	segundosTotales = t1 + t2 + t3; //Operacion y asiganacion
	
	printf("El total de segundos es: %i segundos", segundosTotales); //Impresion del resultado
	
	return 0; //Finaliza el programa
}
