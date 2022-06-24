//Pedir dos palabras al usuario y ordenarlas alfabeticamente

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    char palabra1[20], palabra2[20]; //Declaración de arrays

    printf("Escribe la primera palabra: "); //Solicitud de la primer palabra
    gets(palabra1); //Se guarda en la varible 'palabra1'

    printf("Escribe la segunda palabra: "); //Solicitud de la primer palabra
    gets(palabra2); //Se guarda en la varible 'palabra2'

    if(strcmp(palabra1, palabra2) > 0){ //Compara si palabra1 es mayor que palabra2
        printf("%s, %s", palabra2, palabra1); //Imprime primero palabra2
    }else{ //De lo contario
        printf("%s, %s", palabra1, palabra2); //Imprime primero palabra3
    }

    return 0; //Se termina el programa
}