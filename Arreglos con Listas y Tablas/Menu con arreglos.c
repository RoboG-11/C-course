/*
Menu con arreglos

Escribe un programa para trabajar sobre un arreglo de 10 elementos en el cual se 
solucione al usuario los valores de dicho arreglo y posteriormente se pueda hacer 
las siguientes operaciones;

1) ingresar o modificar elementos del arreglo
2) mostrar la suma de los elementos
3) realizar la multiplicacion de los elementos
4) realizar la suma solo de los elementos divisibles entre 3
5) multiplicar por 3 cada elemento del arreglo

El usuario seleccionará la opcion de su preferencia y el programa mostara los datos
del arreglo original y el resultado de la opcion seleccionada.
El programa debe realizarse en un menu que debe de ejecutarse continuamente hasta que
el usuario decida salir
*/
#include<stdio.h> //Libreria de entrada y salida

void datosArreglo(int arreglo[]); //Declaracion de la funcion
void llenarArreglo(int arreglo[]); //Declaracion de la funcion
void sumaArreglo(int arreglo[]); //Declaracion de la funcion
void multiplicaArreglo(int arreglo[]); //Declaracion de la funcion
void sumaElementosTres(int arreglo[]); //Declaracion de la funcion
void multiplicaTres(int arreglo[]); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int arreglo[10]; //Declaracion de un array de 10 elementos
	int i, bucle=1, option; //Declaracion de variables
	
	printf("Este programa ejecuta operaciones sobre un arreglo de 10 elementos.\n"); //Formato
	
	for(i = 0;  i < 10; i++){ //Bucle que recorre todo el array para llenarlo
		printf("Escribe el elemento [%i] del arreglo: ", i); //Impresion del bucle
		scanf("%i", &arreglo[i]); //Escanea y lo guarda en la posicion de array
	}
	
	while(bucle){ //Bucle con la condicion dada
		printf("\nOpciones que se pueden realizar\n"); //Formato
		printf("1) Ingresar o modificar elementos del arreglo\n"); //Formato
		printf("2) Mostrar la suma de los elementos\n"); //Formato
		printf("3) Realizar la multiplicacion de los elementos\n"); //Formato
		printf("4) Realizar la suma solo de los elementos divisibles entre 3\n"); //Formato
		printf("5) Multiplicar por 3 cada elemento del arreglo\n"); //Formato
		printf("6) Salir\n"); //Formato
		printf("Seleccione la opcion deseada: "); //Formato
		scanf("%i", &option); //Escanea y guarda lo ingresado
		printf("\n"); //Salto de linea
		
		switch(option){ //Switch con las opciones
			case 6: //Opcion 0
				printf("Gracias por usar el programa."); //Impresion de la opcion
				bucle = 0; //Se sale del programa por la condicion
				break; //Se termina la opcion
			case 1: //Opcion 1
				printf("1) Ingresar o modificar elementos del arreglo\n"); //Impresion de la opcion
				datosArreglo(arreglo); //Se llama a la funcion
				llenarArreglo(arreglo); //Se llama a la funcion
				datosArreglo(arreglo); //Se llama a la funcion
				break; //Se termina la opcion
			case 2: //Opcion 2
				printf("2) Mostrar la suma de los elementos\n"); //Impresion de la opcion
				datosArreglo(arreglo); //Se llama a la funcion
				sumaArreglo(arreglo); //Se llama a la funcion
				break; //Se termina la opcion
			case 3: //Opcion 3
				printf("3) Realizar la multiplicacion de los elementos\n"); //Impresion de la opcion
				datosArreglo(arreglo); //Se llama a la funcion
				multiplicaArreglo(arreglo); //Se llama a la funcion
				break; //Se termina la opcion
			case 4: //Opcion 4
				printf("4) Realizar la suma solo de los elementos divisibles entre 3\n"); //Impresion de la opcion
				datosArreglo(arreglo); //Se llama a la funcion
				sumaElementosTres(arreglo); //Se llama a la funcion
				break; //Se termina la opcion
			case 5: //Opcion 5
				printf("5) Multiplicar por 3 cada elemento del arreglo\n"); //Impresion de la opcion
				datosArreglo(arreglo); //Se llama a la funcion
				multiplicaTres(arreglo); //Se llama a la funcion
				break; //Se termina la opcion
			default: //Opcion default
				printf("Opcion no valida.\n"); //Impresion de la opcion
				break; //Se termina la opcion
		}
	}
	return 0; //Se termina el programa
	
}

void datosArreglo(int arreglo[]){ //Funcion de impresion del arreglo
	
	int i; //Declaracion de la variable
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		printf("Posicion[%i] = %i\n", i, arreglo[i]); //Impresion del arreglo
	}
	
}

void llenarArreglo(int arreglo[]){ //Funcion para modificar el contenido del array
	
	int i; //Declaracion de variable
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		printf("\nEscriba el numero para el arreglo en la posicion [%i]: ", i); //Ingreso del nuevo valor
		scanf("%i", &arreglo[i]); //Se escaea y se guarda lo ingresado
	}
		
}

void sumaArreglo(int arreglo[]){ //Funcion que suma el contenido del array
	
	int i, sumatoria = 0; //Declaracion de variables
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		sumatoria = sumatoria + arreglo[i]; //Operacion de asigancion
	}
	
	printf("\nLa suma de los elementos del arreglo es de: %i", sumatoria); //Impresion del resultado
	printf("\n"); //Salto de linea 
	
}

void multiplicaArreglo(int arreglo[]){ //Funcion que multiplica el contenido del array
	
	int i, multiplicacion = 1; //Declaracion de variables
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		multiplicacion = multiplicacion * arreglo[i]; //Operacion de asigancion
	}
	
	printf("La multiplicacion de los elementos del arreglo es de: %i", multiplicacion); //Impresion del resultado
	printf("\n"); //Salto de linea 
	
}

void sumaElementosTres(int arreglo[]){ //Funcion que suma los elementos divisibles entre 3
	
	int i, suma = 0; //Declaracion de variables
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		if(arreglo[i]%3 == 0){ //Condicion de ser divisibles entre 3
			suma = suma + arreglo[i]; //Operacion de asigancion
		}
	}
	
	printf("La sumatoria de los elementos divisibles entre 3 es de: %i", suma); //Impresion del resultado
	printf("\n"); //Salto de linea 
	
}

void multiplicaTres(int arreglo[]){ //Funcion que multiplica el contenido por 3
	int i; //Declaracion de variables
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		arreglo[i] = arreglo[i] * 3; //Operacion de asigancion
	}
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el arreglo
		printf("El arreglo multiplicado por 3 en la posicion [%i] es: %i\n", i, arreglo[i]); //Impresion del resultado
	}
	
}
