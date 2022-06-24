/*
strcmp (cadena1, cadema2) COMPARATY
Compara 2 cadenas de tecto caracter a caracter, es case-sensible (sensible
a mayusculas y minusculas). Cuando se encuentra una diferencia, esta funcion
devuelve un valor entero correspondiente a la diferencia de valor decimal
segun el codigo ASCII. El cual corresponde a la siguiente tabla:

  Si cadena1 es								Entonces devuelve
Igual que cadena2									0
Mayor que cadena2								  n > 0
Menor que cadena2								  n < 0
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char clave[] = "Holaaa"; //Inicializacion de la variable
	char usuario[15]; //Declaracion del arreglo
	int intentos = 3; //Declaracion de variable
	
	do{ //Ciclo do
		printf("\nEscribe la clave de ingreso: "); //Ingreso de datos
		fflush(stdin); //Limpia el buffer de entrada
		scanf("%s", &usuario); //Escanea y guarda lo ingresado
		
		if(strcmp(clave, usuario) == 0){ //Comparacion entre las cadenas
			printf("\nBienvenido al sistema"); //Impresion de la condicion
			break; //Termina con la iteracion y termina con el ciclo completo
		}else{ //Contrario de la condicion
			intentos--; //Resta de intentos
			printf("Clave incorrecta, tines %i intentos", intentos); //Impresion de la condicion
			printf("\n"); //Salto de linea
		}			
	}while(intentos > 0); //Condicion del ciclo do
	
	return 0; //Se termina el programa
	
}
