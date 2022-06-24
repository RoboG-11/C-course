/*
Sacar la hipotenusa de un triangulo rectanguno, pidiendo al usuario
el valor de los 2 catetos
*/
#include<stdio.h> //Libreria de entrada y salida
#include<math.h> //Libreria con funciones matematicas

int main(){ //Funcion principal
	
	float catetoA, catetoO, hipotenusa; //Declaracion de variables
	
	printf("Ingresa el cateto adyacente: "); //Ingreso de valores
	scanf("%f", &catetoA); //Escaneo de valores
	printf("Ingresa el cateto opuesto: "); //Ingreso de valores
	scanf("%f", &catetoO); //Escaneo de valores
	
	hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoO, 2)); //Operacion de asignacion
	//sqrt->Raiz cuadrada. pow->elevar la variable en el segundo espacio (math.h)
	
	printf("El valor de la hipotenusa es: %.2f", hipotenusa); //Impresion del resultado
	
	return 0; //Termina el programa
}

