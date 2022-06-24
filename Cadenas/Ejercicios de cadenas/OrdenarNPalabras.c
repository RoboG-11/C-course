/*
 *Pedir n palabras al usuario y posteriormente ordenarkas alfabeticamente. Utilizar algun metodo
 *de ordenamiento (burbuja, inserccion, seleccion)
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    //Declaración de variables
    char nombre[10][20];
    char aux[20]; //Se debe de tener en cuenta el tamaño de la matriz
    int i, j, k;
    int l = 0;

    printf("Para terminar escriba * \n"); //Impresion en pantalla

    do{
        //Lee las cadenas y las almacena
        printf("Introduce un nombre: ");
        gets(nombre[l]);
        l++;
    }while(strcmp(nombre[l - 1], "*") != 0); //Mientras el nombre sea diferente a 0

    //Ordenar las cadenas
    for(i = 0; i < l - 1; i++){ //Bucle hasta el limite de la palabra
        k = i;
        strcpy(aux, nombre[i]); //Se copia en la variable auxiliar

        for(j = i + 1; j < l; j++){ //Bucle hasta el limite de la palabra
            if(strcmp(nombre[j], aux) < 0){ //Comparacion del nombre 
                k = j;
                strcpy(aux, nombre[j]); //Se copia en la variable auxiliar
            }
        }
        //Se copian los nombre
        strcpy(nombre[k], nombre[i]); 
        strcpy(nombre[i], aux); 
    }

    //Bucle de impresion
    for(i = 0; i < l; i++){
        printf("%s", nombre[i]);
        printf("\n");
    }

    return 0; //Se termina el programa
}