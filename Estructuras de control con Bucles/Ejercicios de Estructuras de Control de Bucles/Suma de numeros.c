/*
Suma de numeros
Determinar la suma de todos los numeros hasta el numero que ingrese el usuario
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int cont, num, suma = 0; //Declaracion de variables
	
	printf("Escribe hasta que el numero quieres que se haga la suma: "); //SOlicitud de datos
	scanf("%i", &num); //Escanea y guarda lo ingresado
	
	cont = 1; //Inicializacion del contador
	
	while(cont <= num){ //While con la condicion
		suma += cont; //Operacion de asignacion
		cont++; //Suma al contador
	}
	printf("La suma hasta el numero %i es de: %i", num, suma); //Impresion del resultado
	
	return 0; //Termina el programa
}

