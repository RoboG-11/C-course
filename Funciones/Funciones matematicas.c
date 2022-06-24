/*
Funciones matematicas *Sin la libreria math.h
ceil(x)->Redondea al entero mayor mas cercano
floor(x)->Redondea al entero menor mas cercano
fabs(x)->Devuelve el valor absoluto de x
sqrt(x)->Saca la raiz cuadrada de x
fmod(x, y)->Calcula el residuo de la division de x/y (mod)
pow(x, y)->Calcula x elevado a la potencia y
*/
#include<stdio.h>

void redondeoM(); //Declaracion de la funcion
void redondeom(); //Declaracion de la funcion
void valorA(); //Declaracion de la funcion
void raizC(); //Declaracion de la funcion
void modulo(); //Declaracion de la funcion
void potencia(); //Declaracion de la funcion

int main(){ //Funcion principal
	
	redondeoM(); //Se llama a la funcion
	redondeom(); //Se llama a la funcion
	valorA(); //Se llama a la funcion
	raizC(); //Se llama a la funcion
	modulo(); //Se llama a la funcion
	potencia(); //Se llama a la funcion
	
	return 0; //Se termina el programa
	
}

void redondeoM(){ //Acciones de la funcion declarada
	
	float num, cambio=0; //Declaracion de variables
	
	printf("Ingresa un numero decimal: "); //Ingreso de datos
	scanf("%f", &num); //Escaneo y guardado de datos
	
	cambio = ceil(num); //Operacion de redondeo
	
	printf("El redondea al entero mayor mas cercano: %.2f", cambio); //Impresion del resultado

}

void valorA(){ //Acciones de la funcion declarada
	
	float num, cambio=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Ingreso de datos
	scanf("%f", &num); //Escaneo y guardado de datos
	
	cambio = fabs(num); //Operacion del valor absoluto
	
	printf("El valor absoluto es: %.2f", cambio); //Impresion del resultado

}

void redondeom(){ //Acciones de la funcion declarada
		
	float num, cambio=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero decimal: "); //Ingreso de datos
	scanf("%f", &num); //Escaneo y guardado de datos
	
	cambio = floor(num); //Operacion de redondeo
	
	printf("El redondea al entero menor mas cercano: %.2f", cambio); //Impresion del resultado

}

void raizC(){ //Acciones de la funcion declarada
			
	float num, cambio=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Ingreso de datos
	scanf("%f", &num); //Escaneo y guardado de datos
	
	cambio = sqrt(num); //Operacion de la raiz cuadrada
	
	printf("La raiz cuadrad del numero es: %.2f", cambio); //Impresion del resultado

}

void modulo(){ //Acciones de la funcion declarada
				
	float num1, num2, cambio=0; //Declaracion de variables
	
	printf("\n\nIngresa el primer numero: "); //Ingreso de datos
	scanf("%f", &num1); //Escaneo y guardado de datos
	printf("Ingresa el segundo numero: "); //Ingreso de datos
	scanf("%f", &num2); //Escaneo y guardado de datos
	
	cambio = fmod(num1, num2); //Operacion del modulo
	
	printf("El residuo de la division es: %.2f", cambio); //Impresion del resultado
	
}
	
void potencia(){ //Acciones de la funcion declarada
					
	float num1, num2, cambio=0; //Declaracion de variables
	
	printf("\n\nIngresa el primer numero: "); //Ingreso de datos
	scanf("%f", &num1); //Escaneo y guardado de datos
	printf("Ingresa el segundo numero: "); //Ingreso de datos
	scanf("%f", &num2); //Escaneo y guardado de datos
	
	cambio = pow(num1, num2); //Operacion de la potencia
	
	printf("El resultado de elevar la potencia es: %.2f", cambio); //Impresion del resultado
	
}

