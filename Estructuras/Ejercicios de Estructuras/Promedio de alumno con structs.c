/*
Promedio de alumno con structs

Hacer 2 estructuras, una llamada promedio que tendra los siguientes miembros:
nota1, nota2, nota3. Y otra llamada alumno, que tendra los siguientes miembros:
nombre, sexo, edad. Hacer que la estructura promedio este anidada en la estructura 
alumno, luego pedir los datos para un alumno. Calcular su promedio, y por ultimo
imprimir todos sus datos incluidos el promedio
*/
#include<stdio.h> //Libreria de entrada y salida

struct promedio{ //Declaracion de estructura
	float nota1; //Declaracion de una variable
	float nota2; //Declaracion de una variable
	float nota3; //Declaracion de una variable
};

struct alumno{//Declaracion de estructura
	char nombre[20]; //Declaracion de un array
	char sexo[20]; //Declaracion de un array
	int edad; //Declaracion de una variable
	struct promedio prom; //Struct anidada
}alumno1; //Variable con las structuras

int main(){ //Funcion principal
	
	int i; //Declaracion de variable iterativa
	float promedio=0; //Declaracion e inicializacion de variable
	
	printf("Escribe tu nombre: "); //Solicitud de datos
	scanf(" %[^\n]", &alumno1.nombre); //Escaneo y guardado en la estructura indicada
	
	printf("Escribe tu sexo: "); //Solicitud de datos
	scanf(" %[^\n]", &alumno1.sexo); //Escaneo y guardado en la estructura indicada
	
	printf("Escribe tu edad: "); //Solicitud de datos
	scanf("%i", &alumno1.edad); //Escaneo y guardado en la estructura indicada
	
	printf("Escribe tu primera calificacion: "); //Solicitud de datos
	scanf("%f", &alumno1.prom.nota1); //Escaneo y guardado en la estructura indicada
	printf("Escribe tu segunda calificacion: "); //Solicitud de datos
	scanf("%f", &alumno1.prom.nota2); //Escaneo y guardado en la estructura indicada
	printf("Escribe tu tercera calificacion: "); //Solicitud de datos
	scanf("%f", &alumno1.prom.nota3); //Escaneo y guardado en la estructura indicada
	
	promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3; //Operacion de asigancion
	
	printf("\nDATOS DEL ALUMNO"); //Formato
	printf("\nNombre del alumno: %s", alumno1.nombre); //Impresion del contenido de la struct
	printf("\nSexo del alumno: %s", alumno1.sexo); //Impresion del contenido de la struct
	printf("\nEdad del alumno: %i", alumno1.edad); //Impresion del contenido de la struct
	printf("\nPromedio del alumno: %.1f", promedio); //Impresion del contenido de la struct
	
	return 0; //Se termina el programa
	
}
