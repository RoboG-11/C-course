/*
Calificacion de alumnos
Un alumno desea saber cual sera su calificacion final. Dicha calificacion se compone
de los siguientes porcentajes:

55% del promedio de tres parciales
30% del examen final
15% del trabajo final
*/

#include<stdio.h> //Libreria estandar de entrada y salida

int main(){ //Funcion principal 
	
	float p1, p2, p3, examen, trabajoFinal, promedioParcial; //Declaracion de variables
	float parcialP=0, examenP=0, trabajoP=0, calificacion=0; //Declaracion de variables
	
	printf("Ingresa la calificacion del primer parcial: "); //Ingreso de valores
	scanf("%f", &p1); //Escanea y guarda los valores
	printf("Ingresa la calificacion del segundo parcial: "); //Ingreso de valores
	scanf("%f", &p2); //Escanea y guarda los valores
	printf("Ingresa la calificacion del tercer parcial: "); //Ingreso de valores
	scanf("%f", &p3); //Escanea y guarda los valores
	
	printf("Ingresa la calififcacion del examen final: "); //Ingreso de valores
	scanf("%f", &examen); //Escanea y guarda los valores
	
	printf("Ingresa la calificacion del trabajo final: "); //Ingreso de valores
	scanf("%f", &trabajoFinal); //Escanea y guarda los valores
	
	parcialP = ((p1 + p2 + p3) / 3); //Asigancion de valor
	
	parcialP = parcialP * 0.55; //Asigancion de valor
	examenP = examen * 0.33; //Asigancion de valor
	trabajoP = trabajoFinal * 0.15; //Asigancion de valor
	
	calificacion = parcialP + examenP + trabajoP; //Asigancion de valor
	
	printf("\nLa calificacion final es: %.2f", calificacion); //Impresion del resultado
	
	return 0; //Finaliza el programa
}
