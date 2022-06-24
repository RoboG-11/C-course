/*
Calificacion de examen
Dada una nota de un examen, mediante un codigo escribir la literal que le corresponde:
MB = Muy Bien
B = Bien
S = Suficiente
NA = No Aprobada
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char calif; //Declaracion de variables
	
	printf("Ingresa la letra de la calificacion: "); //Solicitud de datos
	scanf("%s", &calif); //Escanea y guarda los datos
	
	switch(calif){ //Inicia el switch
		case 'MB': printf("Muy bien"); //Imprime la opcion 
		break; //Se sale de la opcion

		case 'B': printf("Bien"); //Imprime la opcion 
		break; //Se sale de la opcion
		
		case 'S': printf("Suficiente"); //Imprime la opcion 
		break; //Se sale de la opcion
		
		case 'NA': printf("No Aprobada"); //Imprime la opcion 
		break; //Se sale de la opcion	
			 
		default: printf("Opcion invalida"); //Imprime la opcion 
		break; //Se sale de la opcion
	}

	return 0; //Se termina el programa
}
