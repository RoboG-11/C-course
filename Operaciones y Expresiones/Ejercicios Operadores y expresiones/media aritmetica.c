//Calcular la media aritmetica de 3 numeros
#include<stdio.h> //Libreria de estandar de entrada y salida
int main(){ //Funcion principal
	
	int num1, num2, num3; //Declaracion de variables enteras
	float media; //Declaracion de variables flotantes
	
	printf("Ingresa el primer numero: "); //Ingreso de datos 
	scanf("%i", &num1); //Escaneo de datos
	printf("Ingresa el segundo numero: "); //Ingreso de datos 
	scanf("%i", &num2); //Escaneo de datos
	printf("Ingresa el primer tercer: "); //Ingreso de datos 
	scanf("%i", &num3); //Escaneo de datos
	
	media = (num1 + num2+ num3)/3; //Operacion y asignacion
	
	printf("La media de los 3 numeros es: %.2f", media); //Impresion del resultado
	
	return 0; //Finaliza el programa 
}
