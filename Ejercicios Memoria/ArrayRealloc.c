/*
 *Reservar memoria para un arreglo de 5 numeros, rellenarlo y con nnumeros que digite el usuario, luego utilizar
 *realloc para ampliar ese arreglo a 10 numeros y agregar 5 numeros mas, por el ultimo imprimir el arreglo 
 *resultante de 10 numeros
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar

int main(){ //Función principal

    //Declaración de variables
    int *p_array, *p_arrayResultante;
    int i;

    p_array = malloc(5*sizeof(int)); //Se reserva memoria dinamicamente

    for(i = 0; i < 5; i++){ //For que recorre el array
        printf("%i. Ingrese un numero: ", i + 1); //Imprime un texto
        scanf("%i", &p_array[i]); //Escanea y lo guarda en el array dinamico
    }

    p_arrayResultante = realloc(p_array,10*sizeof(int)); //Se amplia la memoria dinamica con realloc

    printf("\n\n"); //Formato de salto de linea

    for(i = 5; i < 10; i++){ //For que recorre los espacios restantes del array resultante
        printf("%i. Ingrese un numero: ", i + 1); //Imprime un texto
        scanf("%i", &p_arrayResultante[i]); //Escanea y lo guarda en el array dinamico
    }

    printf("\n\n"); //Formato de salto de linea

    for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
        printf("%i. \n", p_arrayResultante[i]); //Imprime un elemento del array
    }

    free(p_arrayResultante); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa
}