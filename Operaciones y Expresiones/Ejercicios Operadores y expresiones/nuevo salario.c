/*
Calcular el nuevo salario de un obrero, si obtuvo un incremento del 25%
sobre su salario anterior
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float salario, salarioNuevo, aumento; //Declaracion de variables
	
	printf("Ingrese su salario: "); //Ingreso de datos
	scanf("%f", &salario); //Escaneo de datos
	
	aumento = salario * 0.25; //Operacion y asignacion
	salarioNuevo= salario + aumento; //Operacion y asignacion
	
	printf("Su nuevo salario es de: $%.2f", salarioNuevo); //Impresion de resultado
	
	return 0; //Finaliza el programa
}

