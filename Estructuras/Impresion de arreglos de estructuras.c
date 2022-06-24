/*
Impresion de arreglos de estructuras
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funcion de strings

struct direccion{ //Declaracion de estructura
	char calle[30]; //Declaracion de array
	short num; //Declaracion de variable
	char colonia[30]; //Declaracion de array
	int cp; //Declaracion de variable
};

struct alumno{ //Declaracion de estructura
	int numCuenta; //Declaracion de variable
	char nombre[25]; //Declaracion de array
	char apellido[25]; //Declaracion de array
	float prom; //Declaracion de variable
	struct direccion direc; //Estructura anidada
};

int main(){ //Funcion principal
	
	struct alumno alumno1; //Asignacion de estructuras a variables
	
	strcpy(alumno1.nombre, "Brian"); //Asignacion a la estructura
	strcpy(alumno1.apellido, "Rivera"); //Asignacion a la estructura
	alumno1.numCuenta = 12345; //Asignacion a la estructura
	alumno1.prom = 9.0; //Asignacion a la estructura
	
	strcpy(alumno1.direc.calle, "Division del Norte"); //Asignacion a la estructura anidada
	alumno1.direc.num = 215; //Asignacion a la estructura anidada
	strcpy(alumno1.direc.colonia, "Lomas de Memetla"); //Asignacion a la estructura anidada
	alumno1.direc.cp = 5330; //Asignacion a la estructura anidada
	
	fflush(stdin); //Limpa el buffer de entrada
	
	printf("El nombre del alumno es: %s", alumno1.nombre); //Impresion de la estructura
	printf("\nEl apellido del alumno es: %s", alumno1.apellido); //Impresion de la estructura
	printf("\nEl numero de cuenta del alumno es: %i", alumno1.numCuenta); //Impresion de la estructura
	printf("\nEl promedio del alumno es: %.2f", alumno1.prom); //Impresion de la estructura
	printf("\nLa calle del alumno es: %s", alumno1.direc.calle); //Impresion de la estructura
	printf("\nEl numero de direccion es: %i", alumno1.direc.num); //Impresion de la estructura
	printf("\nLa colonia del alumno es: %s", alumno1.direc.colonia); //Impresion de la estructura
	printf("\nEl codigo postal del alumno es: %i", alumno1.direc.cp); //Impresion de la estructura
	
	return 0; //Se termina el programa
	
}
