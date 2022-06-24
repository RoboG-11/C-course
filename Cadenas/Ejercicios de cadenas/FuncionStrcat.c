//Utiliza la función strcat() para añadir un texto a un string. Hola mi nombre es Brian

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    char cad[] = "Hola a todos "; //Declaración de array
    strcat(cad, "mi nombre es Brian"); //Se concatena el string con la cadena

    printf("%s", cad); //Impresión de la nueva cadena

    return 0; //Se termina el programa
}