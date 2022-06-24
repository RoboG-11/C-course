/*
Busqueda secuencial de numero
Sirve para buscar algo. Busca de uno en uno y no importa si tiene orden
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[10]={2, 4, 6, 8, 1, 3, 5, 7, 9}; //Declaracion e inicializacion
	int i, dato; //Declaracion de variables
	char band='F'; //Declaracion de variable, e inicializacion logica
	
	printf("Ingresa el numero a buscar: "); //Solicitud de datos
	scanf("%i", &dato); //Escaneo y guardado de lo ingresado
	
	i=0; //Inicializacion
	while((band=='F') && (i < 10)){ //Bucle con dos condiciones
		if(array[i] == dato){ //Condicion 
			band = 'V'; //Cambio de valor en la variable logica
		}
		i++; //Iteracion en la pocision del array
	} 
	
	if(band =='F'){ //Condicion
		printf("\nEl numero ingresado no existe"); //Impresion de la condicion
	}else if(band == 'V'){ //Condicion
		printf("\nEl numero existe, en la posicion %i", i-1); //Impresion de la condicion
	}
	
	return 0; //Se termina el programa
	
}
