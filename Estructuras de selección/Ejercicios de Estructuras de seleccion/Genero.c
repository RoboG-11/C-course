/*
Genero
Ingresar el nombre, la edad y el sexo de cualquier persona, e imprima solo si la
persona es de sexo masculino y mayor de edad, el nombre de la persona
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char nombre[30], sexo[20]; //Declaracion de arreglos
	int edad; //Declaracion de variables
	
	printf("Ingrese su nombre: "); //Solicitud de datos
	scanf(" %[^\n]", nombre); //Escanea y guarda 
	printf("Ingrese su edad: "); //Solicitud de datos
	scanf("%i", &edad); //Escanea y guarda 
	printf("Ingresa tu genero: "); //Solicitud de datos
	scanf(" %[^\n]", &sexo); //Escanea y guarda 
	
	printf("\n"); //Salto de linea
	
	if((strcmp(sexo, "Masculino") == 0) && (edad >= 18)){ //Condicion
		printf("Felicidades, cumples con los requisitos %s", nombre); //Resultado de condicion
	}else{ //Lo contrario de una condicion
		printf("No cumple con los requisitos"); //Resultado de condicion
	}
	
	return 0; //Se termina el programa
}
