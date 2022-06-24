/*
Funciones recursivas
recursividad: Es la capacidad de una funcion de llamarse a si misma
1. Caso base
2. Caso recursivo

a(x){
	if(n = 1)
	{
		return n;
	}else{
	a(x); //Se vuleve a llamar dentro de la misma funcion
	}
}
*/
//FACTORIAL CON METODO RECURSIVO
#include<stdio.h> //Libreria de entrada y salida

long factorial(int num); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int num; //Declaracion de una variable
	
	printf("Escribe un numero: "); //Solicitud de datos
	scanf("%i", &num); //Guardado y escaneo de datos
	
	printf("\nEl factorial del numero es: %i", factorial(num)); //Impresion del resultado con el llamado de la funcion
	
	return 0; //Se termina el programa
	
}

long factorial(int num){ //Operacion de la funcion
	
	if(num <= 1){ //Condicion 
		
		return 1; //Regresa 1
		
	}else{ //Lo contrario de la condicion 
	
		return (num * factorial(num - 1)); //Regresa el factorial resultante
		
	}
	
}
