/*pilaD2.c* todas funciones*/
/*Librerias*/
#include "pilaD2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Funciones y/o procedimientos*/
Alumno* crear_Alumno(int ID,char NAME[20],int EDAD){
    Alumno *aux=(Alumno*)malloc(sizeof(Alumno));
    aux->id=ID;
    strcpy(aux->name, NAME);
    aux->edad=EDAD;
    return(aux);
}

Nodo *crear_Nodo(Alumno *alumno){
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->datos=alumno;
    aux->sig=NULL;
    return(aux);
}

Pila *crear_Pila(){
    Pila *aux=(Pila*)malloc(sizeof(Pila));
    aux->cima=NULL;
    aux->longitud=0;
    return(aux);
}

int isEmpty(Pila pila){
//int isEmpty(Pila *pila){
    if(pila.longitud==0)
    {
        //if(pila->longitud==0){
        printf("\n Pila Vacia \n");
        return (1);
    }
    else{
        printf("\n Pila No Esta Vacia \n");
        return (0);
    }
}

void push(Pila *pila, Nodo *aux){
    if(isEmpty(*pila)==1){
        pila->cima=aux;
    }
    else{
        aux->sig=pila->cima;
        pila->cima=aux;
    }
    pila->longitud++;
}

/*
Nodo* pop(Pila *pila){
    struct Nodo* aux=NULL;
    if(!isEmpty(*pila)){
        aux=pila->cima;
        pila->cima=pila->cima->sig;
        pila->longitud--; 
    }
    else{
        printf("\n La pila esta vacia hhh \n");
    }
    return(aux);
}
*/

void pop(Pila *pila){
    struct Nodo* aux=NULL;
    if(!isEmpty(*pila)){
        aux=pila->cima;
        pila->cima=pila->cima->sig;
        pila->longitud--; 
    }
    else{
        printf("\n La pila esta vacia hhh \n");
    }
    printf("\n el nodo que salio es: %d",aux->datos->id);
    //return(aux);
    free(aux);
}

/*void pop(Pila *pila){
    Nodo *aux=NULL;
    if(!isEmpty(*pila)){

        aux=pila->cima;
        printf("\n el nodo que salio es: %d",aux->datos->id);
        pila->cima=pila->cima->sig;
        pila->longitud--; 
    }
    else{
        printf("\n La pila esta vacia hhh \n");
    }
    free(aux); 
    aux=NULL;
}*/

void printPila(Pila *pila){
    Nodo *aux = pila->cima;
    Alumno *alu;
    if(!isEmpty(*pila)) {
        while(aux!=NULL){
            alu = aux->datos;
            printf("\n ID es: %d \n", alu->id);
            printf("\n Name es: %s \n", alu->name);
            printf("\n Edad es: %d \n", alu->edad);
            aux=aux->sig;
        }
    }
    else{
        printf("\n PILA SIN NADA \n");
    }
}

void vaciar(Pila *pila){
    //Nodo *aux;
    //aux=pop(pila);
    //aux=pila->cima;
    //pop(pila);
    //while(aux!=NULL){
    while(pila->cima != NULL){    
        //free(aux);
        pop(pila);
        //aux=pop(pila);
    }
}
