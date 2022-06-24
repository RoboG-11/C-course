/*
Funciones trigonometricas
acos(x)->Calcula el arco coseno de x
asin(x)->Calcula el arco seno de x
atan(x)->Calcula el arco tangente de x
cos(x)->Calcula el coseno de x
sin(x)->Calcula el seno de x
tan(x)->Calcula la tangente de x
*/
#include<stdio.h> //Libreria de entrada y salida
#include<math.h> //Libreria con funciones matematicas

void arcoCos(); //Declaracion de variable
void arcoSin(); //Declaracion de variable
void arcoTan(); //Declaracion de variable 
void coseno(); //Declaracion de variable
void seno(); //Declaracion de variable
void tangente(); //Declaracion de variable

int main(){ //Funcion principal
	
	arcoCos(); //Llamado de la funcion
	arcoSin(); //Llamado de la funcion
	arcoTan(); //Llamado de la funcion
	coseno(); //Llamado de la funcion
	seno(); //Llamado de la funcion
	tangente(); //Llamado de la funcion
	
	return 0; //Se termina el programa
	
}

void arcoCos(){ //Acciones de la funcion declarada
	
	float num, resultado=0; //Declaracion de variables
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = acos(num); //Operacion y asignacion con la funcion
	
	printf("El arco coseno es: %f", resultado); //Impresion del resultado
	
}

void arcoSin(){ //Acciones de la funcion declarada
		
	float num, resultado=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = asin(num); //Operacion y asignacion con la funcion
	
	printf("El arco seno es: %f", resultado); //Impresion del resultado
	
}

void arcoTan(){ //Acciones de la funcion declarada
			
	float num, resultado=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = atan(num); //Operacion y asignacion con la funcion
	
	printf("El arco tangente es: %f", resultado); //Impresion del resultado
	
}

void coseno(){ //Acciones de la funcion declarada
				
	float num, resultado=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = cos(num); //Operacion y asignacion con la funcion
	
	printf("El coseno es: %f", resultado); //Impresion del resultado
	
}

void seno(){ //Acciones de la funcion declarada
					
	float num, resultado=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = sin(num); //Operacion y asignacion con la funcion
	
	printf("El seno es: %f", resultado); //Impresion del resultado
	
}

void tangente(){ //Acciones de la funcion declarada
						
	float num, resultado=0; //Declaracion de variables
	
	printf("\n\nIngresa un numero: "); //Solicitud de datos
	scanf("%f", &num); //Escaneo y guardado de datos ingresados
	
	resultado = tan(num); //Operacion y asignacion con la funcion
	
	printf("La tangente es: %f", resultado); //Impresion del resultado
	
}
