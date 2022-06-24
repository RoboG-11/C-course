/*
Proyecto tienda
Simular una tienda con entradas y salidas de capital
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	int option; //Declaracion de variable entera
	float agregar, retirar, saldo=3000; //Declaracion de variables flotantes
	
	//FORMATO
	printf("\t*****************************************\n"); //Impresion
	printf("\t*Este es un simulador de Tienda o Cajero*\n"); //Impresion
	printf("\t*****************************************\n\n"); //Impresion
	printf("\tSelecciona la opcion deseada\n"); //Impresion
	printf("\t1)Consular saldo\n"); //Impresion
	printf("\t2)Depositar dinero\n"); //Impresion
	printf("\t3)Retirar dinero\n"); //Impresion
	printf("\t4)Salir del cajero\n"); //Impresion
	printf("\t\nOpcion deseada: "); //Impresion e ingreso de datos
	scanf("%i", &option); //Escanea y guarda lo ingresado
	
	printf("\n"); //Salto de linea
	
	//OPCIONES
	switch(option){ 
		case 1: printf("Su saldo actual es de: %.2f", saldo); //Impresion de la opcion
		break; //Termina la opcion
			
		case 2: printf("Cuanto dinero quiere depositar?\n"); //Impresion de la opcion
		scanf("%f", &agregar); //Escanea y guarda lo ingresado
		saldo = saldo + agregar; //Operacion y asignacion
		printf("\nTu saldo actual es de %.2f", saldo); //Impresion del resultado
		break; //Termina la opcion
			
		case 3: printf("Cuanto dinero quiere retirar?\n"); //Impresion de la opcion
		scanf("%f", &retirar); //Escanea y guarda lo ingresado
		if(retirar>saldo){ //Condicion con opcion
			printf("\nNo es posible, tu saldo disponible solo es de: %.2f", saldo); //Impresion del resultado
		}else{ //Lo contrario de la opcion
			saldo = saldo - retirar; //Operacion y asignacion
			printf("\nTu saldo total es de: %.2f", saldo); //Impresion del resultado
		}
		break; //Termina la opcion
			
		case 4:printf("Gracias por usar este programa\n"); //Impresion de la opcion
		printf("Hasta la proxima"); //Impresion de la opcion
		break; //Termina la opcion
		
		default: printf("Opcion invalida"); //Impresion de la opcion
		break; //Termina la opcion
	}
	
	return 0; //Termina el programa
}
