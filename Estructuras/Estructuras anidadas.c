/*
Estructuras anidadas
Anidado hace referencia de "estar dentro"
*/
#include<stdio.h> //Libreria de entrada y salida

struct infoDireccion{ //Declaracion de una estructura
	char direccion[30]; //Declaracion de un array
	char ciudad[30]; //Declaracion de un array
	char codigoPostal[10]; //Declaracion de un array 
};
struct empleado{ //Declaracion de una estructura
	char nombre[30]; //Declaracion de un array
	double salario; //Declaracion de una variable
	struct infoDireccion direcEmpleado; //Estructura anidada
}empleados[2]; //Array con la estructura

int main(){ //Funcion principal
	
	int i; //Declaracion de variable iterativa
	
	for(i = 0; i < 2; i++){ //Ciclo for que recorre el array con estructuras
		fflush(stdin); //Limpa el buffer de entrada
		printf("%i) Escribe su nombre: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &empleados[i].nombre); //Escaneo y guardado en la estructura indicada
		printf("%i) Escribe su salario: ", i+1); //Solicitud de datos
		scanf("%i", &empleados[i].salario); //Escaneo y guardado en la estructura indicada
		printf("%i) Escribe su direccion: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &empleados[i].direcEmpleado.direccion); //Escaneo y guardado en la estructura anidada
		printf("%i) Escribe el nombre de la ciudad: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &empleados[i].direcEmpleado.ciudad); //Escaneo y guardado en la estructura anidada
		printf("%i) Escribe el codigo postal: ", i+1); //Solicitud de datos
		scanf("%i", &empleados[i].direcEmpleado.codigoPostal); //Escaneo y guardado en la estructura anidada
		printf("\n"); //Salto de linea
	}
	
	printf("\n"); //Formato
	
	for(i = 0; i < 2; i++){ //Ciclo for que recorre el array con estructuras e imprime
		printf("\nDatos del empleado numero %i", i+1); //Formato
		printf("\nNombre: %s", empleados[i].nombre); //Impresion de la estructura indicada
		printf("\nSalario: %i", empleados[i].salario); //Impresion de la estructura indicada
		printf("\nDireccion: %s", empleados[i].direcEmpleado.direccion); //Impresion de la estructura anidada
		printf("\nCiudad: %s", empleados[i].direcEmpleado.ciudad);//Impresion de la estructura anidada
		printf("\nCodigo postal: %i", empleados[i].direcEmpleado.codigoPostal);//Impresion de la estructura anidada
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
	
}
