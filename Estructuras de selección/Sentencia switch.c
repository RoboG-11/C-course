/*
Sentencia switch()

switch(seleccion){
	case 1: opcion 1; 
	break; //break->sale del case luego de la opcion
	case 2: opcion 2; 
	break; //break->sale del case luego de la opcion
	case 3: opcion 3; 
	break; //break->sale del case luego de la opcion
	default: ninguna de las anteriores; 
	break; //break->sale del case luego de la opcion
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	int dia; //Declaracion de variable entera
	
	printf("Selecciona un numero de los dias de la semana(1 al 7): "); ///Entrada de datos
	scanf("%i", &dia); //Escanea y guarda el dato 
	
	switch(dia){ //Inicia el switch
		case 1: printf("\nSeleccionaste el Lunes"); //Opcion 1 
		break; //break->sale del case luego de la opcion
		case 2: printf("\nSeleccionaste el Martes"); //Opcion 2 
		break; //break->sale del case luego de la opcion
		case 3: printf("\nSeleccionaste el Miercoles"); //Opcion 3 
		break; //break->sale del case luego de la opcion
		case 4: printf("\nSeleccionaste el Jueves"); //Opcion 4 
		break; //break->sale del case luego de la opcion
		case 5: printf("\nSeleccionaste el Viernes"); //Opcion 5 
		break; //break->sale del case luego de la opcion
		case 6: printf("\nSeleccionaste el Sabado"); //Opcion 6 
		break; //break->sale del case luego de la opcion
		case 7: printf("\nSeleccionaste el Domingo");//Opcion 7 
		break; //break->sale del case luego de la opcion
		default: printf("\nSeleccion invalida"); //Opcion 8 
	}
	
	return 0; //Se termina el programa 
}
