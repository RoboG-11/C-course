/*
Convsersor de año
Transformar años a meses
Transformar meses a semanas
Transformar semanas a dias
Transformar dias a horas

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas

Pedir al usuario que ingrese la cantidad de años con las que se hara la conversion
*/
#include<stdio.h> //Libreria estandas

int main(){ //Funcion principal
	
	int edad, meses, semanas, dias, horas; //Declaracion de variables
	
	printf("Ingresa tu edad: "); //Pide la edad al usuario
	scanf("%i", &edad); //Escanea y guarda la edas
	
	meses = edad * 12; //Operacion de asignacion 
	semanas = meses * 4;  //Operacion de asignacion
	dias = semanas * 7;  //Operacion de asignacion
	horas = dias * 24; //Operacion de asignacion
	
	printf("Tu edad en meses es de %i\n", meses); //Imprime el resultado
	printf("Tu edad en semanas es de %i\n", semanas); //Imprime el resultado
	printf("Tu edad en dias es de %i\n", dias); //Imprime el resultado
	printf("Tu edad en horas es de %i\n", horas); //Imprime el resultado
	
	return 0; //Termina el programa
}
