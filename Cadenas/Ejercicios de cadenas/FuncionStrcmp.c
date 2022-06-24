//Utiliza la función strcmp() para comparar dos palabras

#include<stdio.h> //Libreria de entrda y salida
#include<string.h> //Libreria con funciones para strings

int main(){

    //Declaración de variables
    char palabra1[] = "Brian";
    char palabra2[] = "Brian";

    if(strcmp(palabra1, palabra2) == 0){ //Condición de si es verdad la comparativa
        printf("Ambas palabras son iguales");
    }else{ //De lo contrario
        printf("Las palabras son diferentes");
    }

    return 0; //Se termina el programa
}