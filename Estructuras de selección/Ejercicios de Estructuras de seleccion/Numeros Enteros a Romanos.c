//Numeros Enteros a Romanos
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, millar, centenas, decenas, unidades; //Declaracion de variables
	
	printf("Ingresa un numero entero: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	unidades = num%10; num = num/10; //Operacion y asignacion
	decenas = num%10; num = num/10; //Operacion y asignacion
	centenas = num%10; num = num/10; //Operacion y asignacion
	millar = num%10; num = num/10; //Operacion y asignacion
	
	
	switch(millar){ //Conversion a miles
		case 1: printf("M"); break; //Impresion de la opcion
		case 2: printf("MM"); break; //Impresion de la opcion
		case 3: printf("MMM"); break; //Impresion de la opcion
	}
	switch(centenas){ //Converciones a cientos
		case 1: printf("C"); break; //Impresion de la opcion
		case 2: printf("CC"); break; //Impresion de la opcion
		case 3: printf("CCC"); break; //Impresion de la opcion
		case 4:	printf("CD"); break; //Impresion de la opcion
		case 5: printf("D"); break; //Impresion de la opcion
		case 6: printf("DC"); break; //Impresion de la opcion
		case 7: printf("DCC"); break; //Impresion de la opcion
		case 8:	printf("DCCC"); break; //Impresion de la opcion
		case 9: printf("CM"); break; //Impresion de la opcion
	}
	switch(decenas){ //Conversion a decimos
		case 1: printf("X"); break; //Impresion de la opcion
		case 2: printf("XX"); break; //Impresion de la opcion
		case 3: printf("XXX"); break; //Impresion de la opcion
		case 4: printf("XL"); break; //Impresion de la opcion
		case 5: printf("L"); break; //Impresion de la opcion
		case 6: printf("LX"); break; //Impresion de la opcion
		case 7: printf("LXX"); break; //Impresion de la opcion
		case 8: printf("LXXX"); break; //Impresion de la opcion
		case 9: printf("XC"); break; //Impresion de la opcion
	}
	switch(unidades){ //Conversion a unidades
		case 1: printf("I"); break; //Impresion de la opcion
		case 2: printf("II"); break; //Impresion de la opcion
		case 3: printf("III"); break; //Impresion de la opcion
		case 4: printf("IV"); break; //Impresion de la opcion
		case 5: printf("V"); break; //Impresion de la opcion
		case 6: printf("VI"); break; //Impresion de la opcion
		case 7: printf("VII"); break; //Impresion de la opcion
		case 8: printf("VIII"); break; //Impresion de la opcion
		case 9: printf("IX"); break; //Impresion de la opcion
	}
	
	return 0; //Se termina el programa
}



