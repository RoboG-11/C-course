/*
Recursividad con Fibonacci
1, 1, 2, 3, 5, 8...
*/
#include<stdio.h> //Libreria de entrada y salida 

int fibonacci(int num); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int num, i; //Declaracion de variables
	
	printf("Escribe el numero de elementos: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	printf("\n"); //Salto de linea mamalon
	
	for(i = 1; i <= num; i++){ //Ciclo for de impresion
		printf("%i, ", fibonacci(i)); //Impresion de los numeros y llamado de la funcion
	}
	
	return 0; //Se termina el programa
	
}

/*
1, 1, 2, 3, 5, 8...
fibonacci(1) = 1
fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)... n-1 es la posicion
*/
int fibonacci(int num){ //Intrucciones de la funcion
	
	if(num == 0 || num == 1){ //Condicion
		
		return num; //Se regresa el mismo valor ingresado
	
	}else{ //Lo conrtrario a la condicion anterior
		
		return (fibonacci(num - 1) + fibonacci(num - 2)); //Operacion para obtener el resultado
	//														llamando a la funcion, y se regresa 
	}
	
}
