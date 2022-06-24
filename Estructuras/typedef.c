/*
typedef

typedef structNombreDeLaEstructura{
	variable_1;
	variable_2;
	variable_n;
};
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	typedef int miTipoDeDato; //Declaracion del typedef
	
	miTipoDeDato variable1; //Declaracion de variable
	
	int variable2; //Declaracion de variable
	
	printf("Escriba el primer numero: "); //Ingreso de datos
	scanf("%i", &variable1); //Escaneo y guardado de datos
	printf("Escriba el segundo numero: "); //Ingreso de datos
	scanf("%i", &variable2); //Escaneo y guardado de datos
	
	printf("\nNumeros ingresados: %i y %i", variable1, variable2); //Impresion de resultado
	
	return 0; //Se termina el programa
	
}
