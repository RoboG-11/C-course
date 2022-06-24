//Convertir grados Celsius a Fahrenheint
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float gradosCelsius, gradosFahrenheint; //Declaracion devariables
	
	printf("Ingresa los grados celsius: "); //Ingreso de datos
	scanf("%f", &gradosCelsius); //Escanean y guardan los datos
	
	gradosFahrenheint = gradosCelsius * 1.8 + 32; //Operacion y asignacion
	
	printf("El equivalente en grados Fahrenheint es: %.2f", gradosFahrenheint); //Impresion del resultado
	
	return 0; //Finaliza el programa
}
