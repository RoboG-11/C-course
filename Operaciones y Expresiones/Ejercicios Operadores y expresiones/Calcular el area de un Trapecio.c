//Calcular el area de un Trapecio
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float baseM, basem, altura, area; //Declaracion de variables flotantes
	
	printf("Ingresa la base menor: "); //Ingresar los valores
	scanf("%f", &basem); //Escanea y guarda los valores
	printf("Ingresa la base mayor: "); //Ingresar los valores
	scanf("%f", &baseM); //Escanea y guarda los valores
	printf("Ingresa la altura: "); //Ingresar los valores
	scanf("%f", &altura); //Escanea y guarda los valores
	
	area = (((basem + baseM) * altura) / 2); //Operacion y asignacion
	
	printf("\nEl area del Trapecio es: %.2f", area); //Impresion del resultado
	
	return 0; //Finaliza el programa 
}
