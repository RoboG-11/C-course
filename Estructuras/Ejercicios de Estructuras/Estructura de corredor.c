/*
Estructura de corredor

Hacer una estructura llamada corredor, en la cual se trendrab los siguientes miembros;
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una 
categoria de competicion.
juvenil <= 18 años
señor <= 40 años
veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluyendo su categoria completa
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

struct corredor{ //Declaracion de una estructura
	char nombre[30]; //Declaracion de un array
	char sexo[20]; //Declaracion de un array
	char club[20]; //Declaracion de un array
	int edad; //Declaracion de una variable
}corredor1; //Habra una "persona" con la estructura

char categoria[20]; //Declaracion de un array global

int main(){ //Funcion principal
	
	printf("Escribe tu nombre: "); //Solicitud de datos
	scanf(" %[^\n]", &corredor1.nombre); //Escaneo y guardado de datos
	
	printf("Escribe tu edad: "); //Solicitud de datos
	scanf("%i", &corredor1.edad); //Escaneo y guardado de datos
	
	//fflush(stdin); //Limpia el buffer de entrada
	
	printf("Escribe tu sexo: "); //Solicitud de datos
	scanf(" %[^\n]", &corredor1.sexo); //Escaneo y guardado de datos
	
	printf("Escribe tu club: "); //Solicitud de datos
	scanf(" %[^\n]", &corredor1.club); //Escaneo y guardado de datos
	
	printf("\n"); //Formato
	
	if(corredor1.edad <= 18){ //Condicion
		printf("Tu categoria es Juvenil\n"); //Impresion de la condicion
		strcpy(categoria, "Juvenil"); //Asignacion del string a la variable
	}else if(corredor1.edad <= 40 && corredor1.edad > 18){ //Condicion
		printf("Tu categoria es Senior\n");//Impresion de la condicion
		strcpy(categoria, "Senior"); //Asignacion del string a la variable
	}else if(corredor1.edad > 40){ //Condicion
		printf("Tu categoria es Veterano\n");//Impresion de la condicion
		strcpy(categoria, "Veterano"); //Asignacion del string a la variable
	}
	
	printf("\nDATOS DEL CORREDOR"); //Formato
	printf("\nCategoria: %s", categoria); //Impresion de la variable
	printf("\nNombre: %s", corredor1.nombre); //Impresion de la estructura indicada
	printf("\nEdad: %i", corredor1.edad); //Impresion de la estructura indicada
	printf("\nSexo: %s", corredor1.sexo); //Impresion de la estructura indicada
	printf("\nClub: %s", corredor1.club); //Impresion de la estructura indicada
	
	return 0; //Se termina el programa
	
}
