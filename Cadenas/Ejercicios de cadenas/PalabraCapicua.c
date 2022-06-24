//Determinar si una palabra es capicua o no. Se lee igual de inicio a final y de final a inicio

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    //Declaración de variables
    char palabra1[] = "hannah";
    char palabra2[30];

    strcpy(palabra2, palabra1); //Se copia el contenido de palabra1 a palabra2
    
    strrev(palabra2); //Invierte la palabra

    if(strcmp(palabra1, palabra2) == 0){ //Condión de si palabra1 y palabra2 son iguales
        printf("Es una palabra capicua"); //Impresión de la condición
    }else{ //De lo contrario
        printf("No es capicua"); //Impresión de la condición
    }

    return 0; //Se termina el programa
}