/*
Ordenar numeros descendentemente
*/
#include<stdio.h> //Libreria de entrada y salida

void descendentemente(int a, int b, int c); //Declaracion de la funcion

int main(){ //Funcion principal

	int a, b, c; //Declaracion de variables
	
	printf("Escribe el primer numero: "); //Solicitud de datos
	scanf("%i", &a); //Escaneo o guarado de datos
	printf("Escribe el segundo numero: "); //Solicitud de datos
	scanf("%i", &b); //Escaneo o guarado de datos
	printf("Escribe el tercer numero: "); //Solicitud de datos
	scanf("%i", &c); //Escaneo o guarado de datos
	
	descendentemente(a, b, c); //Se llama a la funcion
	
	return 0; //Se termina el programa
	
}

void descendentemente(int a, int b, int c){ //Instrucciones de la funcion
	
	if(a >= b && a >=c){ //Condicion de comparacion
		if(b >= c){ //Condicion de comparacion
			printf("%i, %i, %i", a, b, c); //Impresion de la comparacion
		}else{ //Lo contrario a la condicion anterior
			printf("%i, %i, %i", a, c, b); //Impresion de la comparacion
		}
	}
	if (b >= a && b >= c){ //Condicion de comparacion
		if(a >= c){ //Condicion de comparacion
			printf("%i, %i, %i", b, a, c); //Impresion de la comparacion
		}else{ //Lo contrario a la condicion anterior
			printf("%i, %i, %i", b, c, a); //Impresion de la comparacion
		}
	}
	if(c >= a && c >= b){ //Condicion de comparacion
		if(b >= a){ //Condicion de comparacion
			printf("%i, %i, %i", c, b, a); //Impresion de la comparacion
		}else{ //Lo contrario a la condicion anterior
			printf("%i, %i, %i", c, a, b); //Impresion de la comparacion
		}
	}
}

