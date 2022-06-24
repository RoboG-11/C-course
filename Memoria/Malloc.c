/*
 *malloc 
 *Asigna determinados bytes de tamaño de almacenamiento no inicializado. Si la asignación tiene éxito, devuelve
 *un puntero al byte más bajo (el primero) en el bloque de memoria aignado que está alineado adecuadamenre para
 *cualquier tipo de objeto con alineación fundamental
 */

#include<stdio.h> //Libreria de entrada y salida

/*
int main(){ //Función principal

    //Declaración de variables
    int *a;
    int x;

    //a = malloc(sizeof(int)); //Se reserva un espacio en memoria para el tipo int
    //sizeof(int) //Tamaño de una variable de tipo entera

    x = sizeof(int); //Se asigna el resultado a una variable

    printf("%i bytes", x); //Se imprimen los bytes que se reservan para los enteros en la pc

    free(a); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}
*/

/*
int main(){ //Función principal

    //Declaración de variables
    int *a;

    a = malloc(sizeof(int)); //Se reserva un espacio en memoria para el tipo int

    *a = 5; //Asignación de un valor a la variable

    printf("%i bytes", *a); //Se imprimen los bytes que se reservan para los enteros en la pc

    free(a); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}
*/

/*
int main(){ //Función principal

    //Declaración de variables
    float *a;

    a = malloc(sizeof(float)); //Se reserva un espacio en memoria para el tipo int

    *a = 5.54; //Asignación de un valor a la variable

    printf("%.2f bytes", *a); //Se imprimen los bytes que se reservan para los enteros en la pc

    free(a); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}
*/


int main(){ //Función principal

    //Declaración de variables
    char *a;

    a = malloc(sizeof(char)); //Se reserva un espacio en memoria para el tipo int

    *a = 'h'; //Asignación de un valor a la variable

    printf("%c bytes", *a); //Se imprimen los bytes que se reservan para los enteros en la pc

    free(a); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}