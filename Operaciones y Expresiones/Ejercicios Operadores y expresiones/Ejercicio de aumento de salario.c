/*
Ejercicio de aumento de salario
Aumentar el salario de un empleado el 10%
*/

#include<stdio.h> //Libreria estandar 

int main(){ //Funcion principal
	
	char nombre[40]; //Declaracion de un arreglo de 40 espacios
	float salario, aumentoSalario; //Declaracion de variables flotantes
	
	printf("Ingresa tu nombre: "); //Pide el nombre
	scanf(" %[^\n]", nombre); //Escanea y guarda el nombre
	
	printf("Bienvenido: %s", nombre); //Imprime el arreglo
	printf("\n\nInserte su salario: ", salario); //Pide el salario
	scanf("%f", &salario); //Escanea y guarda el salario
	
	aumentoSalario = (salario * 0.1) + salario; //Operacion del aumento
	
	printf("Su salario con el aumento es de: %.2f", aumentoSalario); //Imprime el aumento
	
	return 0; //Termina el programa
}

