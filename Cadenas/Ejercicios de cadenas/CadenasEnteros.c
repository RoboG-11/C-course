/*
 *Pedir dos cadenas numericas al usuario, luego convertirlas a numeros enteros, sumar los valores e imprimir
 *el resultado en entero 
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria de entrada y salida

int main(){ //Función principal

    //Declaracion de variables
    char cad1[5], cad2[5];
    int valor1, valor2, suma = 0;

    //Se solicitan y se guardan los datos
    printf("Ingrese el primer valor: ");
    gets(cad1);
    printf("Ingrese el segundo valor: ");
    gets(cad2);

    //Se convierten las cadenas a enteros
    valor1 = atoi(cad1);
    valor2 = atoi(cad2);

    //Operación entre los numeros enteros
    suma = valor1 + valor2;
    
    //Impresión del resultado
    printf("La suma de los valores es: %i", suma);

    return 0; //Se termina el programa
}