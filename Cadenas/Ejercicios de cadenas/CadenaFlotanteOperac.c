/*
 *Pedir dos cadenas (con numero flotante) al usuario, posteriormnete multiplicar dichos numeros y mostrar el
 *resultado 
 */

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

int main(){ //Funcion principal

    //Declaración de variables
    char cad1[5], cad2[5];
    float n1, n2, mult = 0;

    //Solicitud e ingreso de datos
    printf("Ingresa la primer cadena (numero flotante): ");
    gets(cad1);
    printf("Ingresa la segunda cadena (numero flotante): ");
    gets(cad2);

    //Se convierten las cadenas a numeros flotantes
    n1 = atof(cad1);
    n2 = atof(cad2);

    mult = n1 * n2; //Operacion con numeros flotantes

    printf("El resultado de la multiplicacion es: %.2f", mult); //Se imprime el resultado

    return 0; //Se termina el programa
}