/*
Contabilizar generos

Realizar un programa que lea en un array el sexo de los n estudiantes del curso
de Programacion en C, y que determine cuantos hombres y cuantas mujeres se 
encuentran en el grupo. Suponiendo que los datos son extraidos uno por uno
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i, varon=0, mujer=0; //Declaracion de variables
	char alumnos[15]; //Declaracion de un array
	
	printf("Escribe el total de alumnos de la clase: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de lo ingresado
	
	for(i = 1; i <= num; i++){ //Ciclo que imprime las veces solicitadas
		
		printf("\n%i)Ingrese el sexo del alumn@: ", i); //Solicitud de datos
		scanf(" %[^\n]", &alumnos); //Escaneo y guardado de lo ingresad
		
		if (strcmp(alumnos,"masculino") == 0){ //Condicion comparando los string
			varon++; //Aumenta el valor de la variable
		}else if(strcmp(alumnos,"femenino") == 0){//Condicion comparando los string
			mujer++; //Aumenta el valor de la variable
		}
	}
	
	printf("\nEl total de hombes es de: %i", varon); //Impresion del resultado
	printf("\nEl total de mujeres es de: %i", mujer); //Impresion del resultado;
	
	return 0; //Se termina el programa
	
}
