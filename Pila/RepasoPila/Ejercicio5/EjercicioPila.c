//Ejercicio de libros usando pila dinamica

//Bibliotecas a utilizar
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>

//Declaracion de las estructuras
typedef struct Libro{
    int index;
    char nombre[20];
}Libro;

typedef struct Nodo{
    Libro *libro;
    int contador;
    struct Nodo *next;
}Nodo;

typedef struct Pila{
    Nodo *cima;
    int longitud;
}Pila;

//Declaración de fucniones
//!Libro* crearLibro(int index,char nombre[20]);
Nodo *crearNodo(Libro *libro);
Pila *crearPila();
int isEmpty(Pila pila);
Nodo* push(Nodo *nodo, char nombre[20]);
void pop(Pila *pila);
void printPila(Pila *pila);
void vaciar(Pila *pila);

//Declaración de varaibles estaticas para el index (random)
//static int m = 15, n = 777;

Nodo *crearNodo(Libro *libro){
    Nodo *aux = (Nodo*)malloc(sizeof(Nodo));

    aux->libro = libro;
    aux->next = NULL;
    return aux;
}

Pila *crearPila(){
    Pila *aux = (Pila*)malloc(sizeof(Pila));

    aux->cima = NULL;
    aux->longitud = 0;
    return aux;
}

int isEmpty(Pila pila){
    if(pila.longitud == 0){
        printf("\n Pila Vacia  xd\n");
        return 1;
    }else{
        return 0;
    }
}

Nodo* push(Nodo *nodo, char nombre[20]){
    //Nodo nodo;
    Pila pila;
    nodo->libro->index = 1 + rand() % ((10 - 1) - 1);
    strcpy(nodo->libro->nombre, nombre);

    if(nodo == NULL){
        nodo -> contador=1;
    }else{
        nodo -> contador++;
    }

    nodo -> next = nodo;
    nodo = pila.longitud++;
    return nodo;
}

void pop(Pila *pila){
    struct Nodo* aux = NULL;

    if(!isEmpty(*pila)){
        aux = pila->cima;
        pila->cima = pila->cima->next;
        pila->longitud--; 
    }else{
        printf("\n La pila esta vacia \n");
    }//printf("\n el nodo que salio es: %d",aux->datos->id);
    //return(aux);

    free (aux);
}

void printPila(Pila *pila){
    Nodo *aux = pila->cima;
    Libro *libro;
    if(!isEmpty(*pila)){
        while(aux != NULL){
            libro = aux->libro;
            printf("|%d   %s|\n", aux->libro->index, aux->libro->nombre);
            aux = aux->next;
        }
    }
}

void vaciar(Pila *pila){
    while(pila->cima != NULL){
        pop(pila);
    }
}

//Funcion principal
int main(){

    srand(time(NULL));
    Pila *pila;
    //pila = NULL;
    Nodo *nodo;
    int opcion;

    pila = crearPila();

    do{
        printf("1) Agregar libro\n");
        printf("2) Quitar libro\n");
        printf("3) Vaciar pila\n");
        printf("4) Imprimir pila\n");
        printf("5) Salir\n");
        printf("\nOpcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                //char name [20];
                printf("\nIngrese el nombre del libro: ");
                scanf("%*c%[^\n]", nodo->libro->nombre);
                //gets(nodo->libro->nombre);
                push(nodo, nodo->libro->nombre);
                break;
            case 2: 
                pop(nodo);
                printf("\nSe ha eliminado un libro");
                break;
            case 3:   
                vaciar(pila);
                break;
            case 4:     
                printf("\n");
                printPila(pila);
                break;
            case 5: 
                printf("\nGracias por usar el programa");
                break;
            default:
                printf("\nOpcion no valida");
                printf(". Seleccione otra por favor");
                break;
        }
    }while(opcion != 5);

    vaciar(pila);
    free(pila);

    return 0;
}