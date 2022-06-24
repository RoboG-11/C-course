#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declracion de variables
    int cont, variable, array[]={35, 40, 45, 50, 55};
    int *ptr = (int *)calloc(10, sizeof(int)); //Se reserva la memoria dinamica
    char *ptr2 = (char *)calloc(100, sizeof(char)); //Se reserva la memoria dinamica

    //Imprimiendo las direcciones del array 
    for(int i = 0; cont < 10; cont++){
        printf("Direccion del arreglo [%i]: %p \n", cont, &array[cont]);
        printf("Valor del arreglo [%d]: %d\n\n", cont, array[cont]);
    }

    printf("\n");

    //Inprimienro direcciones y contenido de una apuntador dinamico
    for(cont = 0; cont < 10; cont++){
        printf("Direccion = %p\n", ptr+cont);
        printf("Valor = %d\n\n", *(ptr + cont));
    }

    //Asigansmos valores de la tabal del cuatro
    for(cont = 0; cont < 10; cont++){
        ptr[cont] = 4*(cont + 1);
    }

    //Imprimimos los valores del apuntador
    for(cont = 0; cont < 10; cont++){
        printf("Direccion = %p\n", ptr+cont);
        printf("Valor = %d\n\n", *(ptr + cont));
    }

    //Usamos realloc para redimensionat el tamaño de ptr a 20 espacios
    ptr = (int *)realloc(ptr, 20*sizeof(int));

    //Imprimimos los valores del apuntador
    for(cont = 0; cont < 20; cont++){
        printf("Direccion: %p\n", ptr+cont);
        printf("Valor: %i\n\n", *(ptr+cont));
    }

    //Se libera la memoria dinamica
    free(ptr);
    free(ptr2);

    return 0;
}