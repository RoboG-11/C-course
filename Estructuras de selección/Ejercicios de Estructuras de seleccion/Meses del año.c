/*
Meses del año
Mostrar los meses de año, pidiendo al usuario un numero entre el (1-12) y mostrar
el mes al que corresponde
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int mes; //Declaracion de variables
	
	printf("Ingresa un numero del 1-12: "); //Solicitud de datos
	scanf("%i", &mes); //Escanea y guarda los datos
	
	printf("\n"); //Salto de linea
	
	switch(mes){ //Empiezan las opciones
		case 1: printf("Enero"); break; //Impresion de la opcion
		case 2: printf("Febrero"); break; //Impresion de la opcion
		case 3: printf("Marzo"); break; //Impresion de la opcion
		case 4: printf("Abril"); break; //Impresion de la opcion
		case 5:	printf("Mayo"); break; //Impresion de la opcion
		case 6: printf("Junio"); break; //Impresion de la opcion
		case 7: printf("Julio"); break; //Impresion de la opcion
		case 8:	printf("Agosto"); break; //Impresion de la opcion
		case 9: printf("Septiembre"); break; //Impresion de la opcion
		case 10: printf("Octubre"); break; //Impresion de la opcion
		case 11: printf("Noviembre"); break; //Impresion de la opcion
		case 12: printf("Diciembre"); break; //Impresion de la opcion
		default: printf("Opcion invalida"); break; 
	}
	
	return 0; //Termina el programa
}
