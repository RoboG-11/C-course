/*
 *Diferencias entre malloc, calloc y realloc
 *
 *MALLOC ocupa el cast al inicio: cambia el tipo de valor. Malloc devuelve un apuntador vacio. Ejemplo:
 *int *ptr = (int*)malloc(sizeof(int));. Regresa un apuntador vacio y por el cast se hace un apuntador a entero.
 *Tiene la caracteristica que si se manda a imprimir, se muestra lo que tenga, ya sea basura. Ocupa un argumentos
 *
 *CALLOC ocupa el cast al inicio: cambia el tipo de valor. Calloc devuelve un apuntador vacio. Ejemplo:
 *int *ptr = (int*)calloc(10, sizeof(int));. Regresa un apuntador vacio y el cast se hace un apuntador a entero. 
 *Tiene la caracteristica que si se manda a imprimir, se inicializa a cero. Ocupa dos argumentos
 *
 *REALLOC ocupa el cast al inicio: cambia el tipo de valor. Realloc devuelve un apuntador vacio. Ejemplo:
 *int *rea = (int*)realloc(mall, 20 * sizeof(int));. Regresa un apuntador vacio y por cast se hace apuntador entero
 *Tiene la caracteristica que si se manda a imprimir, se muestra lo que tenga, ya sea basura. Ocupa dos argumentos
 *nos ayuda a aumentra o disminuir el tamaño de la memoria dinamica. Recibe un apuntador vacio y el tamaño
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar

int main(){ //Función principal

    //printf("\nptr(int) = %d\n", sizeof(int)); //Imprime los bytes que ocupa el entero
    //printf("ptr(float) = %d\n", sizeof(float)); //Imprime los bytes que ocupa el flotante
    //printf("ptr(char) = %d\n", sizeof(char)); //Imprime los bytes que ocupa el char
    //printf("ptr(double) = %d\n", sizeof(double)); //Imprime los bytes que ocupa el double

    int *mall = (int*)malloc(10 * sizeof(int)); //Se asigna el valor el espacio suficiente al apuntador. Malloc
    printf("malloc = %p\n", mall); //Impresion de la direccion de memoria con %p
    printf("malloc = %d\n", *mall); //Se accede por medio del apuntador al valor de la variable y se imprime

    //for(int i = 0; i < 10; i++){ //Bucle que imprime el espacio de malloc
    //    printf("malloc = %p\n", mall + i);
    //    printf("malloc = %d\n", *mall + i);
    //}

    int *call = (int*)calloc(10, sizeof(int)); //Se asigna el valor el espacio suficiente al apuntador. Calloc
    printf("\ncalloc = %p\n", call); //Impresion de la direccion de memoria con %p
    printf("calloc = %d\n", *call); //Se accede por medio del apuntador al valor de la variable y se imprime

    //for(int i = 0; i < 10; i++){ //Bucle que imprime el espacio de calloc
    //    printf("calloc = %p\n", call + i);
    //    printf("calloc = %d\n", *call + i);
    //}

    int *rea = (int*)realloc(mall, 20 * sizeof(int)); //Se aumenta el tamaño de lo que está en 'mall'
    printf("\nrealloc = %p\n", rea); //Impresion de la direccion de memoria con %p
    printf("realloc = %d\n", rea); //Se accede por medio del apuntador al valor de la variable y se imprime

    //for(int i = 0; i < 20; i++){ //Bucle que imprime el espacio de calloc
    //    printf("realloc = %p\n", mall + i);
    //    printf("realloc = %d\n", *mall + i);
    //}

    //Se libera la memoria, pase lo que pase
    free(mall);
    free(call);
    free(rea);
    
    return 0; //Se termina el programa
}