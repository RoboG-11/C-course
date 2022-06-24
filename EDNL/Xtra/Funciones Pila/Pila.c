#include"pila.h"

int main(){ //Función principal

    Pila miPila = crearPila(); //Creamos una pila con la función

    push(&miPila, 10); //Llamamos a la función y le pasamos los argumentos

    printf("El valor del tope es: %d\n", miPila.tope); //Se imprime el valor del tope
    printf("El valor dentro del tope es: %d\n", miPila.lista[miPila.tope-1]); //Imprime el valor 

    push(&miPila, 12); //Llamamos a la función y le pasamos los argumentos
    push(&miPila, 13); //Llamamos a la función y le pasamos los argumentos
    push(&miPila, 14); //Llamamos a la función y le pasamos los argumentos

    printf("El valor del tope es: %d\n", miPila.tope); //Se imprime el valor del tope
    printf("El valor dentro del tope es: %d\n", top(miPila)); //Se imprime el valor con función

    int valor = pop(&miPila); //Eliminamos el último valor
    printf("\nEl valor eliminado es: %d\n", valor); //Imprimimos el último valor

    printf("El valor del tope es: %d\n", miPila.tope); //Se imprime el valor del tope
    printf("El valor dentro del tope es: %d\n", top(miPila)); //Se imprime el valor con función

    return 0; //Se termina el programa
}