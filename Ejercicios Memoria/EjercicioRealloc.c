#include<stdio.h>
#include<stdlib.h>

int main(){

    int *dinamico = (int *)malloc(sizeof(int) * 4); //Memoria dinamica para 4 enteros
    int i;

    //Contenido del array dinamico
    *dinamico = 10;
    *(dinamico + 1) = 20;
    dinamico[2] = 30;

    printf("%d  ", *(dinamico + 2));

    *(dinamico + 2) = 20; //Se cambia el valor 

    printf("%d  ", dinamico[2]);

    *(dinamico + 3) = 40; //Se cambia el valor 

    int *dino = (int *) realloc(dinamico, sizeof(int) * 10); //Aumentamos la memoria dinamica para 10 enteros

    //Se llena el array dinamico de 10 enteros
    for (int i = 0; i < 10; i++){
        *(dino + i) = (i + 1) * 10; //Se calcula la tabla de 10
        printf("%d  ", *(dino + i)); //Se imprime la tabla de 10
        printf("%p\n", (dino + i)); //Imprime la posicion de memoria
    }

    //Se libera la memoria dinamica
    free(dinamico);
    free(dino);

    return 0;
}