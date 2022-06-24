/*
Aprobacion de Alumno
Comprobar a travez de un programa si un alumno aprobo o no un examen (el
alumno aprueba si su nota es mayor a 10.5)
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float examen; //Definicio de variable
	
	printf("Ingrese la nota del examen: "); //Solicitus de datos
	scanf("%f", &examen); //Escanea y guarda lo ingresado
	
	if(examen>10.5){ //Condicion
		printf("El alumno esta aprobado"); //Accion de la codicion
	}else{ //Lo contrario de la condicion
		printf("El alumno NO esta aprobado"); //Accion de la condicion
	}
	
	return 0; //Termina el programa
}
