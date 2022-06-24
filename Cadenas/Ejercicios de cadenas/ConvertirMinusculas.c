/*
 *Pedir al usuario su nombre y apellidos (en mayusvulas), psoteriormente utilizar la función strlwr() para 
 *convertir las MAYUSCULAS  en minusculas e imprimir los datos
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

struct datos{ //Declaración de una struc
    char nombre[20]; //Array de 20 espacios
    char apellidos[30]; //Array de 30 espacios
}dato1; //Repeticiones de la struc

int main(){ //Función principal

    printf("Escribe tu nombre (EN MAYUSCULAS): "); //Solicitud de nombre
    gets(dato1.nombre); //Se guarda lo ingresado en la estructura

    printf("Escribe tu apellido (EN MAYUSCULAS): "); //Solicitud de apellido
    gets(dato1.apellidos); //Se guarda lo ingresado en la estrcutura

    //Se todo convierte a minusculas 
    strlwr(dato1.nombre); 
    strlwr(dato1.apellidos);

    printf("\nTu nombre es: %s", dato1.nombre); //Impresión del nombre en minusculas
    printf("\nTu apellido es: %s", dato1.apellidos); //Impresión del apellido en minusculas

    return 0; //Se termina el programa
}