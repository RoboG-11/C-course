/*
 *Hacer un programa que con memoria dinamica y usando tres funciomes pueda crear un arreglo dinamico creado por 
 *el usuario.
 *1) obtener la cantidad de datos para regresarlos en una funcion
 *2) leer los datos y llenar el arreglo dinamico por el usuario
 *3) Imprimir los datos dados por el usuario
 */

#include<stdio.h>
#include<stdlib.h>

//Declaracion de las funciones
int obtenerCantidad();
void rellenarDatos(int tamanio, int *array);
void imprimirDatos(int tamanio, int *array);

int main(){

    int tamanio = obtenerCantidad(); //S llama a la funcion y se pasa su valor a la variable
    int *array = (int *)calloc(tamanio, sizeof(int)); //Se reserva la memoria dinamica
    rellenarDatos(tamanio, array); //Se llama a la funcion que recolecta los datos
    printf("\n\n");
    imprimirDatos(tamanio, array); //Funcion que imprime los datos

    free(array); //Se libera la memoria dinamica

    return 0;
}

int obtenerCantidad(){ //Fucnion que solamnete obtiene la cantidad de elementos en el array

    int cantidad;

    printf("Cuantos numeros va a ingresar?:  ");
    scanf("%d", &cantidad);

    return cantidad;
}

void rellenarDatos(int tamanio, int *array){ //Funtion que rellena el array dinamcio

    for(int i = 0; i < tamanio; i++){
        printf("Ingresa el elemento [%i]: ", i);
        scanf("%i", &array[i]);
    }

}

void imprimirDatos(int tamanio, int *array){ //Function que imprime los elementos del array

    for(int i = 0; i < tamanio; i++){
        printf("Elemento del array [%i]: %i\n", i, array[i]);
    }

}