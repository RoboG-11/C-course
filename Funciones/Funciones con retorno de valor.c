/*
Funciones con retorno de valor
tipoDeDato nombreFucion (parametros){
	instrucciones;
	return expresion;
}
*/
#include<stdio.h> //Libreria de entrada y salida

int suma(); //Declaracion de una funcion

int num1, num2; //Declaracion de variables globales

int main(){ //Funcion principal
	
	printf("Ingresa el primer numero: "); //Solicita datos 
	scanf("%i", &num1); //Escanea y guarda lo ingresado
	
	printf("Ingresa el primer segundo: "); //Solicita datos 
	scanf("%i", &num2); //Escanea y guarda lo ingresado
	
	printf("\nLa suma es: %i", suma(num1, num2)); //Impresion del resultado con la funcion
	
	return 0; //Se termina el programa
	
}

int suma(int num1, int num2){ //Acciones de la funcion declarada
	
	int resultado; //Declaracion de variable
	
	resultado = num1+ num2; //Operacion de asigancion
	
	return resultado; //Se termina la funcion y regresa lo obtenido
	
}
