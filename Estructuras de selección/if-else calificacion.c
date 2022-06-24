/*
Sentencia if-else o doble

if(algo){
	accion 1;
}else{
	accion 2;
}

*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float calificacion; //Declaracion de variable flotantes
	
	printf("Ingresa tu calificacion: "); //Solicita calificacion
	scanf("%f", &calificacion); //Escanea y lo guarda en una direccion de memoria
	
	if(calificacion >= 6){ //if con la condicion
		printf("\nFelicidades, pasaste la materia"); //Impresion de la condicion
	}else{ //De lo contrario a la condicion anterior 
		printf("\nReprobado"); //Impresion de la condicion
	}
	
	return 0; //Se termina el programa
}
	
