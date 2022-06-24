/*
 *Pedir al usuario su nombre, apellido y ciudad en la que vive, posteriormente pasar todo a MAYUSCULAS 
 *e imprimir los datos (utilizar una struct)
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria estandar

//Struct que contiene los datos en arrays
struct datos{
    char nombre[20];
    char apellidos[20];
    char ciudad[20];
}datos1;

int main(){ //Función principal

    //Se ingresa y se guarda lo ingresado 
    printf("Ingrese su nombre: ");
    gets(datos1.nombre);
    printf("Ingrese sus apellidos: ");
    gets(datos1.apellidos);
    printf("Ingrese su ciudad: ");
    gets(datos1.ciudad);

    //Conversion a MAYUSCULAS
    strupr(datos1.nombre);
    strupr(datos1.apellidos);
    strupr(datos1.ciudad);

    //Impresión de los datos en MAYUSCULAS
    printf("\nSu nombre es: %s", datos1.nombre);
    printf("\nSus apellidos son: %s", datos1.apellidos);
    printf("\nSu ciudad es: %s", datos1.ciudad);

    return 0; //Se termina el programa
}