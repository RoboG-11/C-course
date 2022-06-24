/**
 *Pedir el nombre de 3 familiares al usuario (en MAYUSCULAS) y posteriormente convertir los datos ingresaods
 *en minusculas
 */
 
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings 

//Struct de los tres familiares con su nombre
struct familia{
    char nombre[40];
}familiares[3]; //3 familiares

int main(){ //Función principal

    int i; //Declaración de variables

    //Soliciud del nombre de los 3 familiares
    for(i = 0; i < 3; i++){
        printf("Nombre del familiar[%i] (en MAYUSCULAS): ", i+1);
        gets(familiares[i].nombre);
    }

    //Conversion a minusculas los datos
    for(i = 0; i < 3; i++){
        strlwr(familiares[i].nombre);
    }

    //Impresión de los datos en minusculas
    for(i = 0; i < 3; i++){
        printf("\nNombre del familiar[%i]: %s", i+1, familiares[i].nombre);
    }

    return 0; //Se termina el programa
}