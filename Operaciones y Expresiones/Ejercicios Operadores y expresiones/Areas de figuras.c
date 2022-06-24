/*
Areas de figuras
Calcular el area de un triangulo
Calcula el area de un cuadrado
*/
#include<stdio.h> //Libreria de entrada y salida

/*
AREA DE UN TRIANGULO
int main(){ //Funcion principal
	
	float base, altura, area; //Declaracion de variables
	
	printf("Ingresa la base: "); //Pide valores
	scanf("%f", &base); //Escanea lo ingresado
	printf("\nIngresa la altura: "); //Pide valores
	scanf("%f", &altura); //Escanea lo ingresado
	
	area = ((base*altura)/2); //Realiza la operacion
	
	printf("El area del triangulo es %.2f", area); //Imprime el resultado
			
	return 0; //Termina el programa
} 
*/

//AREA DE UN CUADRADO
int main(){ //Funcion principal
	
	float lado, area; //Declaracion de variables
	printf("Ingresa el valor del lado: "); //Pide valores
	scanf("%f", &lado); //Escanea lo ingresado
	
	area = pow(lado, 2); //pow->Eleva una variable a un exponente
	
	printf("El area del cuadrado es: %.2f", area); //Imprime el resultado
	
	return 0; //Termina el programa
}
