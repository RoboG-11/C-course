/*
Raiz cuadrada
Ingresar un numero, calcule e imprima su raiz cuadrada. Si el numero es negativo
imprimir el numero con el mensaje "tiene raiz imaginaria"
*/
#include<stdio.h> //Libreria de entrada y salida
#include<math.h> //Libreria con funciones matematicas

int main(){ //Funcion principal
	
	int num; //Declaracion de una variable
	float raizC; //Declaracion de una variable
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num); //Escanea y guarda los datos
	
	printf("\n");
	
	if(num > 0){ //Condicion
		raizC = pow(num, 0.5); //Operacion y asigancion. 'pow' eleva a una potencia un numero
		printf("La raiz cuadrada es: %.2f", raizC); //Imprime el resultado
	}else{ //Lo contrario de la condicion
		printf("El numero tiene raiz imaginaria"); //Imprime el resultado
	}
	
	return 0; //Termina el programa
}

