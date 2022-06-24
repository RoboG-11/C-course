/*
 *Pedir al usuario el numero de elementos para un array de numeros enteros, posteriormente comprobar con malloc 
 *si hay memoria sificiente (si el puntero es valido, es decir diferente de NULL), si la hay entonces rellenar
 *ese array con numeros aleatorios, si no la hay decir que hay error en la asiganción de memoria.
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar 

int main(){ //Función principal

    int *p_array, n , i; //Declaración de variables

    printf("Ingrese el total de elementos del array: "); //Se imprime en pantalla
    scanf("%i", &n); //Se escanea lo ingresado y se guarda en la variable 

    p_array = malloc(n*sizeof(int)); //Se reserva memoria dinamica con lo ingresado por el usuario

    if(p_array == NULL){ //Condición de ser nulo
        printf("Error en la asigancion de memoria"); //Se imprime en pantalla
        return -1; //Se regresa un -1 como error
    }else{ //Lo contrario de la condición
        srand(time(NULL)); //Genera un numero random
        for(i = 0; i < n; i++){ //Recorre el array dinamico
            p_array[i] = 1 + rand()%((n + 1) - 1); //Se llena el array con el numero random
            printf("%i. Numero: %i\n", i + 1, p_array[i]); //Se imprime en pantalla el contenido del array
        }
    }

    free(p_array); //Se libera la memoria dinamica

    return 0; //Se termina el programa
}